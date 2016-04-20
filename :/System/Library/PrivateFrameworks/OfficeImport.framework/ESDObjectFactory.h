/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:53:40 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@class NSMutableArray;

@interface ESDObjectFactory : NSObject {

	EshObjectFactory* eshObjectFactory;
	NSMutableArray* eshObjectFactoryStack;

}
+(id)threadLocalFactory;
-(void)dealloc;
-(id)init;
-(EshObject*)createObjectWithType:(unsigned short)arg1 ;
-(EshObject*)createObjectWithType:(unsigned short)arg1 version:(unsigned short)arg2 ;
-(void)replaceHostEshFactoryWith:(EshObjectFactory*)arg1 ;
-(void)restoreHostEshFactory;
-(void)setEshFactory:(EshObjectFactory*)arg1 ;
@end

