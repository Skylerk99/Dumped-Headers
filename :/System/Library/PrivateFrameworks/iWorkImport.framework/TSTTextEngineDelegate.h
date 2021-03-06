/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:43 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPTextDelegate.h>

@class TSULocale, TSWPPadding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {

	TSWPPadding* mPadding;
	int mVerticalAlignment;
	double mMaxWidthForChildren;
	TSULocale* mLocale;

}

@property (assign,nonatomic) double maxWidthForChildren; 
@property (nonatomic,readonly) TSULocale * locale; 
-(id)initWithPadding:(UIEdgeInsets)arg1 verticalAlignment:(int)arg2 locale:(id)arg3 ;
-(void)setMaxWidthForChildren:(double)arg1 ;
-(double)maxWidthForChildren;
-(BOOL)forceWesternLineBreaking;
-(void)dealloc;
-(id)padding;
-(TSULocale *)locale;
-(int)verticalAlignment;
@end

