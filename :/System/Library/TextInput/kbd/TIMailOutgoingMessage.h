/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:57:02 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /System/Library/TextInput/kbd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <kbd/TILinguisticDataSourceMessage.h>

@class NSDate, NSString, NSDictionary;

@interface TIMailOutgoingMessage : NSObject <TILinguisticDataSourceMessage> {

	NSDictionary* _searchResult;

}

@property (nonatomic,retain) NSDictionary * searchResult;              //@synthesize searchResult=_searchResult - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSDate * dateSent; 
@property (nonatomic,copy,readonly) NSString * recipient; 
@property (nonatomic,copy,readonly) NSString * body; 
@property (nonatomic,readonly) BOOL fromMe; 
-(NSDate *)dateSent;
-(NSString *)recipient;
-(void)dealloc;
-(NSString *)body;
-(NSDictionary *)searchResult;
-(void)setSearchResult:(NSDictionary *)arg1 ;
@end

