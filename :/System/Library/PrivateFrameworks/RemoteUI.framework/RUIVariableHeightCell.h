/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:54:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <RemoteUI/RemoteUI-Structs.h>
#import <RemoteUI/RemoteUITableViewCell.h>

@interface RUIVariableHeightCell : RemoteUITableViewCell {

	BOOL _supportsAccessory;

}

@property (assign,nonatomic) BOOL supportsAccessory;              //@synthesize supportsAccessory=_supportsAccessory - In the implementation block
-(void)layoutSubviews;
-(double)height;
-(double)contentWidth;
-(CGSize)textLabelSizeForWidth:(double)arg1 ;
-(CGSize)detailLabelSizeForWidth:(double)arg1 ;
-(BOOL)supportsAccessory;
-(void)setSupportsAccessory:(BOOL)arg1 ;
@end

