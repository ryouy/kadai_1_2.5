import xlsxwriter
from collections import defaultdict
trip_cnt = defaultdict(int)
with open("trips.txt", "r") as f:
    for line in f:
        trip_cnt[line.rstrip()] += 1

book = xlsxwriter.Workbook('trips.xlsx')
sheet = book.add_worksheet('Trips')
# we split each city pair into components
# then write cities and number of trips
# to the cells (row+1, 0); (row+1, 1); (row+1, 2)
for row, city_pair in enumerate(trip_cnt):
    src, dest = city_pair.split()
    trips = trip_cnt[city_pair]
    sheet.write_row(row + 1, 0,
                    [src, dest, trips])

sheet.add_table(0, 0, row + 1, 2,
                {'columns': [{'header': 'From'},
                             {'header': 'To'},
                             {'header': 'Times'}]})
book.close()
