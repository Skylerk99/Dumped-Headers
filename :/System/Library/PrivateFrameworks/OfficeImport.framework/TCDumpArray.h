/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:37 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OfficeImport-Structs.h>
#import <OfficeImport/TCDumpType.h>

@class NSString, TCDumpType;

@interface TCDumpArray : TCDumpType {

	int mCount;
	int mCountFieldType;
	NSString* mCountFieldName;
	int mPaddingSize;
	TCDumpType* mElementType;

}
-(void)dealloc;
-(void)fromBinary:(_sFILE*)arg1 toXml:(xmlNode*)arg2 state:(id)arg3 ;
-(id)initWithCount:(int)arg1 countFieldType:(int)arg2 countFieldName:(id)arg3 elementType:(id)arg4 ;
-(id)initWithCount:(int)arg1 elementType:(id)arg2 ;
-(id)initWithCountFieldType:(int)arg1 elementType:(id)arg2 ;
-(id)initWithCountFieldName:(id)arg1 elementType:(id)arg2 ;
@end

