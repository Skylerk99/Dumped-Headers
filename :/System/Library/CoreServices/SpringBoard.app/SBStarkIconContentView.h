/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:25 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIconContentView.h>

@class SBStarkIconLayoutOverrideStrategy;

@interface SBStarkIconContentView : SBIconContentView {

	SBStarkIconLayoutOverrideStrategy* _iconLayoutOverrideStrategy;

}

@property (nonatomic,retain) SBStarkIconLayoutOverrideStrategy * iconLayoutOverrideStrategy;              //@synthesize iconLayoutOverrideStrategy=_iconLayoutOverrideStrategy - In the implementation block
-(SBStarkIconLayoutOverrideStrategy *)iconLayoutOverrideStrategy;
-(void)setIconLayoutOverrideStrategy:(SBStarkIconLayoutOverrideStrategy *)arg1 ;
-(CGRect)_frameForFolderView:(id)arg1 ;
-(void)dealloc;
@end

