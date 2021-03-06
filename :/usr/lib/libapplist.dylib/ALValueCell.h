/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:57:12 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libapplist.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol ALValueCellDelegate;
@interface ALValueCell : UITableViewCell {

	id<ALValueCellDelegate> delegate;

}

@property (assign,nonatomic) id<ALValueCellDelegate> delegate; 
-(void)loadValue:(id)arg1 ;
-(void)loadValue:(id)arg1 withTitle:(id)arg2 ;
-(void)didSelect;
-(void)setDelegate:(id<ALValueCellDelegate>)arg1 ;
-(id<ALValueCellDelegate>)delegate;
@end

