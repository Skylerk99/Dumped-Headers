/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:54 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/AccessibilityBundles/SpeakThis.axuiservice/SpeakThis
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <SpeakThis/SpeakThis-Structs.h>
@class AXUIElement;

@interface AXSpeakingRange : NSObject {

	AXUIElement* _element;
	NSRange _range;

}

@property (nonatomic,retain) AXUIElement * element;              //@synthesize element=_element - In the implementation block
@property (assign,nonatomic) NSRange range;                      //@synthesize range=_range - In the implementation block
-(id)description;
-(NSRange)range;
-(void)setRange:(NSRange)arg1 ;
-(void)setElement:(AXUIElement *)arg1 ;
-(AXUIElement *)element;
@end

