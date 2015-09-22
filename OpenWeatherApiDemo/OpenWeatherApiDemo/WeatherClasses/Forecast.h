//
//  Forecast.h
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 23/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Temperature.h"

@interface Forecast : NSObject

@property(nonatomic, assign)int clouds;
@property(nonatomic, assign)int degree;
@property(nonatomic, retain)NSString *date;
@property(nonatomic, assign)int humidity;
@property(nonatomic, assign)float pressure;
@property(nonatomic, assign)float speed;
@property(nonatomic, retain)Temperature *temperature;
@property(nonatomic, retain)NSString *weatherDescription;
@property(nonatomic, retain)NSString *weatherIcon;
@property(nonatomic, retain)NSString *weatherMain;
@property(nonatomic, retain)NSString *weatherID;

@end
