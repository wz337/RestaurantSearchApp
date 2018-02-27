//
//  DetailViewHeaderTableViewCell.h
//  YelpMock
//
//  Created by iris on 10/21/17.
//  Copyright © 2017 com.iris. All rights reserved.
//

#import <UIKit/UIKit.h>
@class YelpDataModel;

@interface DetailViewHeaderTableViewCell : UITableViewCell

- (void)updateBasedOnDataModel:(YelpDataModel *)dataModel;

@end

