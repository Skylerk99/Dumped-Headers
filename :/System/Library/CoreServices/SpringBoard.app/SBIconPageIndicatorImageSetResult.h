/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:46:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _UILegibilityImageSet;

@interface SBIconPageIndicatorImageSetResult : NSObject {

	_UILegibilityImageSet* _pageIndicatorSet;
	_UILegibilityImageSet* _enabledPageIndicatorSet;

}

@property (nonatomic,retain,readonly) _UILegibilityImageSet * pageIndicatorSet;                     //@synthesize pageIndicatorSet=_pageIndicatorSet - In the implementation block
@property (nonatomic,retain,readonly) _UILegibilityImageSet * enabledPageIndicatorSet;              //@synthesize enabledPageIndicatorSet=_enabledPageIndicatorSet - In the implementation block
-(_UILegibilityImageSet *)enabledPageIndicatorSet;
-(_UILegibilityImageSet *)pageIndicatorSet;
-(id)initWithIndicatorSet:(id)arg1 enabledIndicatorSet:(id)arg2 ;
-(void)dealloc;
@end

