/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSString, NSMutableDictionary;

@interface TCDumpEnum : NSObject {

	NSString* mTypeName;
	NSMutableDictionary* mValueToNameMap;
	NSMutableDictionary* mNameToValueMap;

}
-(void)dealloc;
-(id)initWithTypeName:(id)arg1 pairs:(TCDumpEnumPair*)arg2 ;
-(id)typeName;
-(id)valueForName:(id)arg1 ;
-(id)nameForValue:(int)arg1 ;
@end

