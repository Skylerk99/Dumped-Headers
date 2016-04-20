/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:52 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class IKStylesGroup, NSMutableDictionary;

@interface IKStyleFactory : NSObject {

	IKStylesGroup* _stylesGroup;
	NSMutableDictionary* _styleListsByClassSelector;

}

@property (nonatomic,retain,readonly) IKStylesGroup * stylesGroup;                                  //@synthesize stylesGroup=_stylesGroup - In the implementation block
@property (nonatomic,retain,readonly) NSMutableDictionary * styleListsByClassSelector;              //@synthesize styleListsByClassSelector=_styleListsByClassSelector - In the implementation block
+(id)styleFactoryWithMarkup:(id)arg1 filterBlockedStyles:(BOOL)arg2 ;
-(id)initWithStylesGroup:(id)arg1 ;
-(id)_collapsedStyleListForSelectors:(id)arg1 targetSelector:(id)arg2 stylesGroup:(id)arg3 ;
-(NSMutableDictionary *)styleListsByClassSelector;
-(IKStylesGroup *)stylesGroup;
-(id)styleListForClassSelector:(id)arg1 ;
@end

