//
//  YelpDataStore.m
//  YelpMock
//
//  Created by iris on 10/18/17.
//  Copyright © 2017 com.iris. All rights reserved.
//


#import "YelpDataStore.h"
#import "YelpDataModel.h"


@implementation YelpDataStore
    
+ (YelpDataStore *)sharedInstance {
    static YelpDataStore *_sharedInstance = nil;
    static dispatch_once_t oncePredicate;
    dispatch_once(&oncePredicate, ^{
        _sharedInstance = [[YelpDataStore alloc] init];
    });
    return _sharedInstance;
}
    
@end




