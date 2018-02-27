//
//  YelpDataStore.h
//  YelpMock
//
//  Created by iris on 10/18/17.
//  Copyright © 2017 com.iris. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreLocation;
@class YelpDataModel;

@interface YelpDataStore : NSObject
@property (nonatomic, copy) NSArray <YelpDataModel *> *dataModels;
@property (nonatomic) CLLocation *userLocation;
    
+ (YelpDataStore *)sharedInstance;
    
@end



