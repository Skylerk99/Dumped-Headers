/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:52:24 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDHealthDaemon;
@class NSArray;

@interface HDPluginManager : NSObject {

	NSArray* _plugins;
	id<HDHealthDaemon> _healthDaemon;
	NSArray* _pluginClasses;

}

@property (nonatomic,retain) NSArray * plugins;                                   //@synthesize plugins=_plugins - In the implementation block
@property (assign,nonatomic,__weak) id<HDHealthDaemon> healthDaemon;              //@synthesize healthDaemon=_healthDaemon - In the implementation block
@property (nonatomic,retain) NSArray * pluginClasses;                             //@synthesize pluginClasses=_pluginClasses - In the implementation block
-(id<HDHealthDaemon>)healthDaemon;
-(void)setHealthDaemon:(id<HDHealthDaemon>)arg1 ;
-(id)initWithHealthDaemon:(id)arg1 ;
-(void)loadPlugins;
-(NSArray *)plugins;
-(id)queryServerForUUID:(id)arg1 serverDataObject:(id)arg2 queryClass:(Class)arg3 clientProxy:(id)arg4 client:(id)arg5 healthDaemon:(id)arg6 queryDelegate:(id)arg7 ;
-(id)_pluginsPath;
-(id)_loadPrincipalClassesConformingToProtocol:(id)arg1 withBundleDirectoryPath:(id)arg2 ;
-(NSArray *)pluginClasses;
-(Class)_loadPrincipalClassesConformingToProtocol:(id)arg1 withBundleAtPath:(id)arg2 ;
-(void)_enumerateObjectsInArray:(id)arg1 conformingToProtocol:(id)arg2 usingBlock:(/*^block*/id)arg3 ;
-(void)setPlugins:(NSArray *)arg1 ;
-(void)setPluginClasses:(NSArray *)arg1 ;
@end

