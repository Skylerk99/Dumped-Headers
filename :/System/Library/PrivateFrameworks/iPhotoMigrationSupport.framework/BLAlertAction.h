/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:56:05 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/iPhotoMigrationSupport.framework/iPhotoMigrationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BLAlertAction : NSObject {

	/*^block*/id _block;
	NSString* _name;

}

@property (readonly) id block;                     //@synthesize block=_block - In the implementation block
@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
+(id)cancelAction;
+(id)actionWithName:(id)arg1 andBlock:(/*^block*/id)arg2 ;
-(id)block;
-(NSString *)name;
-(id)initWithName:(id)arg1 andBlock:(/*^block*/id)arg2 ;
@end

