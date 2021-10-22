import json;
import requests;
import argparse;
import sys;

parsh = argparse.ArgumentParser (prog = 'rovimg',
                                 description = 'Finds the image taken by NASA Mars Rovers using id and date',
                                 epilog = 'Enjoy the program ;)',
                                 allow_abbrev = False);

r = requests.get ("https://api.nasa.gov/mars-photos/api/v1/rovers/curiosity/photos?earth_date=2015-6-3&api_key=aN3ZwmqoJlQrsk4gzuE2Z6bReE9y7eGcI6WHCMxi");

files = r.json()['photos'];

parsh.add_argument ('-i',
                    '--id',
                       metavar = 'id',
                       type = int,
                       action = 'store',
                       required = True,
                       help = 'the id of the pic');

parsh.add_argument ('-d',
                    '--date',
                        metavar = 'date (YYYY-MM-DD)',
                        type = str,
                        action = 'store',
                        required = True,
                        help = 'the date of the pic');


args = parsh.parse_args();

idFile = args.id;
dateFile = args.date;

isPresent = False;

for i in files :
    if (i['id'] == idFile and i['earth_date'] ==  dateFile) :
        isPresent = True;
        print (i['img_src']);

if (not(isPresent)) :
    print('Not Found');
    sys.exit();

