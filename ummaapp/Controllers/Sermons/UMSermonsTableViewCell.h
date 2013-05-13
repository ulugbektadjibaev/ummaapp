//
//  UMSermonsTableViewCell.h
//  ummaapp
//
//  Created by utadjibaev on 5/13/13.
//  Copyright (c) 2013 utadjibaev. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UMSermonsTableViewCell : UITableViewCell

@property (nonatomic,strong) IBOutlet UILabel *sermonsDateDay;
@property (nonatomic,strong) IBOutlet UILabel *sermonsDateMonth;
@property (nonatomic,strong) IBOutlet UILabel *sermonsDateYear;
@property (nonatomic,strong) IBOutlet UILabel *sermonsTitle;
@property (nonatomic,strong) IBOutlet UILabel *sermonsAuthorAndType;

@end