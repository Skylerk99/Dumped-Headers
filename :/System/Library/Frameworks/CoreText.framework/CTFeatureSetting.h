/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:47:26 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/CoreText.framework/CoreText
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDictionary.h>

@class NSDictionary;

@interface CTFeatureSetting : NSDictionary {

	NSDictionary* _dictionary;

}
-(id)initWithType:(id)arg1 selector:(id)arg2 tag:(id)arg3 value:(id)arg4 ;
-(id)initWithNormalizedDictionary:(id)arg1 ;
-(BOOL)isEqualToFeatureSetting:(id)arg1 ;
-(void)dealloc;
-(unsigned long long)count;
-(id)initWithDictionary:(id)arg1 ;
-(id)objectForKey:(id)arg1 ;
-(id)type;
-(id)value;
-(id)selector;
-(id)tag;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(id)keyEnumerator;
@end

