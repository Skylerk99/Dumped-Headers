/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:57:11 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /usr/lib/libapplist.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ALApplicationTableDataSource, NSDictionary, NSArray, NSCondition, NSString;

@interface ALApplicationTableDataSourceSection : NSObject {

	ALApplicationTableDataSource* _dataSource;
	NSDictionary* _descriptor;
	NSArray* _displayNames;
	NSArray* _displayIdentifiers;
	double iconSize;
	BOOL isStaticSection;
	long long loadingState;
	double loadStartTime;
	NSCondition* loadCondition;

}

@property (nonatomic,readonly) NSDictionary * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,readonly) NSString * footerTitle; 
+(void)loadIconsFromBackground;
+(void)initialize;
-(void)loadContent;
-(void)potentialLoadFail;
-(void)completedLoading;
-(id)initWithDescriptor:(id)arg1 dataSource:(id)arg2 loadsAsynchronously:(BOOL)arg3 ;
-(BOOL)waitForContentUntilDate:(id)arg1 ;
-(id)displayIdentifierForRow:(long long)arg1 ;
-(id)cellDescriptorForRow:(long long)arg1 ;
-(id)tableView:(id)arg1 cellForRow:(long long)arg2 ;
-(void)updateCell:(id)arg1 forRow:(long long)arg2 withLoadedIconOfSize:(double)arg3 forDisplayIdentifier:(id)arg4 ;
-(void)dealloc;
-(NSString *)title;
-(void)detach;
-(NSString *)footerTitle;
-(NSDictionary *)descriptor;
-(long long)rowCount;
@end

