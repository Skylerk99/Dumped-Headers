/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:49:23 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <Foundation/NSCoder.h>

@interface WKRemoteObjectEncoder : NSCoder {

	RefPtr<API::Dictionary>* _rootDictionary;
	Array* _objectStream;
	Dictionary* _currentDictionary;

}
-(BOOL)requiresSecureCoding;
-(void)encodeInt64:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeObject:(id)arg1 forKey:(id)arg2 ;
-(void)encodeBool:(BOOL)arg1 forKey:(id)arg2 ;
-(id)init;
-(void)encodeInt:(int)arg1 forKey:(id)arg2 ;
-(BOOL)allowsKeyedCoding;
-(void)encodeInteger:(long long)arg1 forKey:(id)arg2 ;
-(void)encodeBytes:(const char*)arg1 length:(unsigned long long)arg2 forKey:(id)arg3 ;
-(void)encodeFloat:(float)arg1 forKey:(id)arg2 ;
-(void)encodeDouble:(double)arg1 forKey:(id)arg2 ;
-(void)encodeInt32:(int)arg1 forKey:(id)arg2 ;
-(Dictionary*)rootObjectDictionary;
-(void)encodeValueOfObjCType:(const char*)arg1 at:(const void*)arg2 ;
@end

