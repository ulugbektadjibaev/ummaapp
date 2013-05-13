//
//  UMSermonsTableViewCell.h
//  ummaapp
//
//  Created by utadjibaev on 5/13/13.
//  Copyright (c) 2013 utadjibaev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UMSermonsTableViewCell : UITableViewCell

@property (nonatomic,strong)UILabel *sermonsDateDay;
@property (nonatomic,strong)UILabel *sermonsDateMonth;
@property (nonatomic,strong)UILabel *sermonsDateYear;
@property (nonatomic,strong)UILabel *sermonsTitle;
@property (nonatomic,strong)UILabel *sermonsAuthorAndType;

@end