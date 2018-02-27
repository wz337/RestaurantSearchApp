//
//  YelpTableViewCell.h
//  YelpMock
//
//  Created by iris on 10/15/17.
//  Copyright © 2017 com.iris. All rights reserved.
//


#import <UIKit/UIKit.h>

@class YelpDataModel;

@interface YelpTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end

