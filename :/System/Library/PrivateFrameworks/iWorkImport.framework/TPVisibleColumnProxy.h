/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:50 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSWPOffscreenColumn.h>

@class TPPageController, NSString;

@interface TPVisibleColumnProxy : NSObject <TSWPOffscreenColumn> {

	unsigned long long _pageIndex;
	TPPageController* _pageController;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) unsigned long long startCharIndex; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) unsigned long long startAnchoredCharIndex; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
-(NSRange)anchoredRange;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteLayoutCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(unsigned long long)startCharIndex;
-(unsigned long long)startAnchoredCharIndex;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(id)initWithPageIndex:(unsigned long long)arg1 pageController:(id)arg2 ;
-(const TSWPTargetHint*)p_targetFirstHint;
-(const TSWPTargetHint*)p_targetLastHint;
-(void)dealloc;
-(NSRange)range;
@end

