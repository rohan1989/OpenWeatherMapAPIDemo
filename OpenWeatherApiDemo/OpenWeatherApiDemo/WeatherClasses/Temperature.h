//
//  Temperature.h
//  OpenWeatherAPIDemo
//
//  Created by Rohan Sonawane on 23/09/15.
//  Copyright (c) 2015 Rohan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Temperature : NSObject

@property(nonatomic, assign)float day;
@property(nonatomic, assign)float evening;
@property(nonatomic, assign)float maximum;
@property(nonatomic, assign)float minimum;
@property(nonatomic, assign)float morning;
@property(nonatomic, assign)float night;

@end
