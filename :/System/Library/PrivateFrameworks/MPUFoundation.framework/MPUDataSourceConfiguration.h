/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:59 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface MPUDataSourceConfiguration : NSObject {

	Class _dataSourceClass;
	NSString* _dataSourceCachingKey;
	/*^block*/id _defaultQueryCreationBlock;
	long long _entityType;

}

@property (nonatomic,readonly) Class dataSourceClass;                    //@synthesize dataSourceClass=_dataSourceClass - In the implementation block
@property (nonatomic,copy) NSString * dataSourceCachingKey;              //@synthesize dataSourceCachingKey=_dataSourceCachingKey - In the implementation block
@property (nonatomic,copy) id defaultQueryCreationBlock;                 //@synthesize defaultQueryCreationBlock=_defaultQueryCreationBlock - In the implementation block
@property (assign,nonatomic) long long entityType;                       //@synthesize entityType=_entityType - In the implementation block
+(id)configurationWithDataSourceClass:(Class)arg1 ;
-(long long)entityType;
-(void)setEntityType:(long long)arg1 ;
-(id)initWithDataSourceClass:(Class)arg1 ;
-(NSString *)dataSourceCachingKey;
-(void)setDataSourceCachingKey:(NSString *)arg1 ;
-(id)defaultQueryCreationBlock;
-(void)setDefaultQueryCreationBlock:(id)arg1 ;
-(Class)dataSourceClass;
@end

