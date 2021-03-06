/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 19, 2016 at 11:45:15 AM Mountain Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /Library/Application Support/AdSheet/MapWebKitPlugin.webplugin/MapWebKitPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapWebKitPlugin/MapWebKitPlugin-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKMapViewDelegate.h>
#import <libobjc.A.dylib/WebAllowDenyPolicyListener.h>

@class MKMapView, WebScriptObject, NSLock, MKUserLocation, NSMutableDictionary, NSMutableArray, NSMapTable, NSString, UILongPressGestureRecognizer, NSDictionary, UIButton;

@interface MapPluginView : UIView <MKMapViewDelegate, WebAllowDenyPolicyListener> {

	BOOL _clientAllowsFileURLLoading;
	BOOL _verboseDebugLoggingEnabled;
	BOOL _showsUserLocation;
	BOOL _userLocationVisible;
	BOOL _zoomEnabled;
	BOOL _scrollEnabled;
	BOOL _longPressDropsPin;
	double _screenScale;
	id _delegate;
	MKMapView* _mapView;
	WebScriptObject* _jsListener;
	NSLock* _lock;
	MKUserLocation* _userLocation;
	unsigned long long _mapType;
	NSMutableDictionary* _mapAnnotations;
	NSMutableArray* _selectedMapAnnotations;
	NSMutableDictionary* _mapAnnotationImages;
	NSMutableArray* _deferredAnnotations;
	NSMutableDictionary* _downloadsInProgress;
	NSMapTable* _URLsByConnection;
	NSMutableArray* _imageDownloadConnections;
	NSMutableDictionary* _overlaysById;
	NSString* _droppedPinTitle;
	NSString* _droppedPinIdentifier;
	UILongPressGestureRecognizer* _longPressGestureRecognizer;
	NSDictionary* _pluginArguments;
	UIButton* _infoLightButton;
	UIButton* _detailDisclosureButton;
	CGSize _boundsSize;
	SCD_Struct_Ma4 _region;
	SCD_Struct_Ma4 _visibleMapRect;

}

@property (assign) BOOL clientAllowsFileURLLoading;                                                  //@synthesize clientAllowsFileURLLoading=_clientAllowsFileURLLoading - In the implementation block
@property (assign) BOOL verboseDebugLoggingEnabled;                                                  //@synthesize verboseDebugLoggingEnabled=_verboseDebugLoggingEnabled - In the implementation block
@property (assign) double screenScale;                                                               //@synthesize screenScale=_screenScale - In the implementation block
@property (assign,nonatomic) id delegate;                                                            //@synthesize delegate=_delegate - In the implementation block
@property (retain) WebScriptObject * jsListener;                                                     //@synthesize jsListener=_jsListener - In the implementation block
@property (retain) NSLock * lock;                                                                    //@synthesize lock=_lock - In the implementation block
@property (assign) SCD_Struct_Ma4 coordinateRegion;                                                  //@synthesize region=_region - In the implementation block
@property (assign) SCD_Struct_Ma4 visibleMapRect;                                                    //@synthesize visibleMapRect=_visibleMapRect - In the implementation block
@property (assign) BOOL showsUserLocation;                                                           //@synthesize showsUserLocation=_showsUserLocation - In the implementation block
@property (assign) BOOL userLocationVisible;                                                         //@synthesize userLocationVisible=_userLocationVisible - In the implementation block
@property (nonatomic,retain) MKUserLocation * userLocation;                                          //@synthesize userLocation=_userLocation - In the implementation block
@property (assign) unsigned long long internalMapType;                                               //@synthesize mapType=_mapType - In the implementation block
@property (assign) BOOL zoomEnabled;                                                                 //@synthesize zoomEnabled=_zoomEnabled - In the implementation block
@property (assign) BOOL scrollEnabled;                                                               //@synthesize scrollEnabled=_scrollEnabled - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mapAnnotations;                                   //@synthesize mapAnnotations=_mapAnnotations - In the implementation block
@property (nonatomic,retain) NSMutableArray * selectedMapAnnotations;                                //@synthesize selectedMapAnnotations=_selectedMapAnnotations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * overlaysById;                                     //@synthesize overlaysById=_overlaysById - In the implementation block
@property (assign) BOOL longPressDropsPin;                                                           //@synthesize longPressDropsPin=_longPressDropsPin - In the implementation block
@property (nonatomic,copy) NSString * droppedPinTitle;                                               //@synthesize droppedPinTitle=_droppedPinTitle - In the implementation block
@property (nonatomic,copy) NSString * droppedPinIdentifier;                                          //@synthesize droppedPinIdentifier=_droppedPinIdentifier - In the implementation block
@property (nonatomic,retain) MKMapView * mapView;                                                    //@synthesize mapView=_mapView - In the implementation block
@property (assign) CGSize boundsSize;                                                                //@synthesize boundsSize=_boundsSize - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * mapAnnotationImages;                              //@synthesize mapAnnotationImages=_mapAnnotationImages - In the implementation block
@property (nonatomic,retain) NSMutableArray * deferredAnnotations;                                   //@synthesize deferredAnnotations=_deferredAnnotations - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * downloadsInProgress;                              //@synthesize downloadsInProgress=_downloadsInProgress - In the implementation block
@property (nonatomic,retain) NSMapTable * URLsByConnection;                                          //@synthesize URLsByConnection=_URLsByConnection - In the implementation block
@property (nonatomic,retain) NSMutableArray * imageDownloadConnections;                              //@synthesize imageDownloadConnections=_imageDownloadConnections - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * longPressGestureRecognizer;              //@synthesize longPressGestureRecognizer=_longPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) NSDictionary * pluginArguments;                                         //@synthesize pluginArguments=_pluginArguments - In the implementation block
@property (nonatomic,retain) UIButton * infoLightButton;                                             //@synthesize infoLightButton=_infoLightButton - In the implementation block
@property (nonatomic,retain) UIButton * detailDisclosureButton;                                      //@synthesize detailDisclosureButton=_detailDisclosureButton - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)scriptSelectors;
+(id)scriptingKeys;
+(id)plugInViewWithArguments:(id)arg1 ;
+(id)webScriptNameForSelector:(SEL)arg1 ;
+(id)webScriptNameForKey:(const char*)arg1 ;
+(BOOL)isKeyExcludedFromWebScript:(const char*)arg1 ;
+(BOOL)isSelectorExcludedFromWebScript:(SEL)arg1 ;
-(id)convertRectToRegion:(id)arg1 ;
-(void)setJsListener:(WebScriptObject *)arg1 ;
-(unsigned long long)internalMapType;
-(id)convertRegionToRect:(id)arg1 ;
-(void)setInternalMapType:(unsigned long long)arg1 ;
-(void)_internalAddAnnotation:(id)arg1 ;
-(void)_internalRemoveAnnotation:(id)arg1 ;
-(void)setDroppedPinTitle:(NSString *)arg1 ;
-(void)setPluginArguments:(NSDictionary *)arg1 ;
-(SCD_Struct_Ma4)coordinateRegion;
-(NSMutableDictionary *)mapAnnotations;
-(BOOL)clientAllowsFileURLLoading;
-(UIButton *)infoLightButton;
-(void)setOverlays:(id)arg1 ;
-(BOOL)userLocationVisible;
-(NSString *)droppedPinIdentifier;
-(void)setImageDownloadConnections:(NSMutableArray *)arg1 ;
-(void)setOverlaysById:(NSMutableDictionary *)arg1 ;
-(void)setInfoLightButton:(UIButton *)arg1 ;
-(UIButton *)detailDisclosureButton;
-(BOOL)verboseDebugLoggingEnabled;
-(NSMutableDictionary *)overlaysById;
-(BOOL)zoomEnabled;
-(void)setDetailDisclosureButton:(UIButton *)arg1 ;
-(BOOL)longPressDropsPin;
-(void)setUserLocationVisible:(BOOL)arg1 ;
-(void)setMapAnnotationImages:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)deferredAnnotations;
-(void)setDeferredAnnotations:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)downloadsInProgress;
-(void)setDroppedPinIdentifier:(NSString *)arg1 ;
-(void)setCoordinateRegion:(SCD_Struct_Ma4)arg1 ;
-(CGSize)boundsSize;
-(void)setClientAllowsFileURLLoading:(BOOL)arg1 ;
-(NSDictionary *)pluginArguments;
-(void)setVerboseDebugLoggingEnabled:(BOOL)arg1 ;
-(WebScriptObject *)jsListener;
-(void)setDownloadsInProgress:(NSMutableDictionary *)arg1 ;
-(NSMapTable *)URLsByConnection;
-(void)setURLsByConnection:(NSMapTable *)arg1 ;
-(NSMutableArray *)imageDownloadConnections;
-(void)setMapAnnotations:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)selectedMapAnnotations;
-(void)setSelectedMapAnnotations:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)mapAnnotationImages;
-(void)setLongPressDropsPin:(BOOL)arg1 ;
-(id)regionThatFits:(id)arg1 ;
-(void)deselectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(void)setVisibleMapRect:(SCD_Struct_Ma4)arg1 ;
-(SCD_Struct_Ma4)visibleMapRect;
-(void)selectAnnotation:(id)arg1 animated:(BOOL)arg2 ;
-(void)setCenterCoordinate:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)showsUserLocation;
-(void)setRegion:(id)arg1 animated:(BOOL)arg2 ;
-(id)overlays;
-(void)insertOverlay:(id)arg1 aboveOverlay:(id)arg2 ;
-(void)insertOverlay:(id)arg1 atIndex:(id)arg2 ;
-(void)removeOverlay:(id)arg1 ;
-(void)exchangeOverlayAtIndex:(id)arg1 withOverlayAtIndex:(id)arg2 ;
-(void)addOverlay:(id)arg1 ;
-(void)insertOverlay:(id)arg1 belowOverlay:(id)arg2 ;
-(NSString *)droppedPinTitle;
-(id)annotations;
-(id)selectedAnnotations;
-(void)setShowsUserLocation:(BOOL)arg1 ;
-(void)setMapView:(MKMapView *)arg1 ;
-(void)setSelectedAnnotations:(id)arg1 ;
-(void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2 ;
-(MKUserLocation *)userLocation;
-(void)mapView:(id)arg1 regionWillChangeAnimated:(BOOL)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(void)mapViewWillStartLoadingMap:(id)arg1 ;
-(void)mapViewDidFinishLoadingMap:(id)arg1 ;
-(void)mapViewDidFailLoadingMap:(id)arg1 withError:(id)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 calloutAccessoryControlTapped:(id)arg3 ;
-(void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectAnnotationView:(id)arg2 ;
-(void)mapViewWillStartLocatingUser:(id)arg1 ;
-(void)mapViewDidStopLocatingUser:(id)arg1 ;
-(void)mapView:(id)arg1 didUpdateUserLocation:(id)arg2 ;
-(void)mapView:(id)arg1 didFailToLocateUserWithError:(id)arg2 ;
-(void)mapView:(id)arg1 annotationView:(id)arg2 didChangeDragState:(unsigned long long)arg3 fromOldState:(unsigned long long)arg4 ;
-(id)mapView:(id)arg1 viewForOverlay:(id)arg2 ;
-(void)mapView:(id)arg1 didAddOverlayViews:(id)arg2 ;
-(void)removeAnnotations:(id)arg1 ;
-(void)removeOverlays:(id)arg1 ;
-(void)addAnnotations:(id)arg1 ;
-(void)addAnnotation:(id)arg1 ;
-(void)removeAnnotation:(id)arg1 ;
-(void)addOverlays:(id)arg1 ;
-(MKMapView *)mapView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id)delegate;
-(id)superview;
-(void)setScrollEnabled:(BOOL)arg1 ;
-(void)setLongPressGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)longPressGestureRecognizer;
-(NSLock *)lock;
-(void)setZoomEnabled:(BOOL)arg1 ;
-(void)webPlugInInitialize;
-(void)webPlugInDestroy;
-(id)objectForWebScript;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(double)screenScale;
-(void)setScreenScale:(double)arg1 ;
-(void)handleLongPress:(id)arg1 ;
-(void)setRegion:(id)arg1 ;
-(id)region;
-(id)listener;
-(void)setListener:(id)arg1 ;
-(void)allow;
-(void)deny;
-(BOOL)shouldClearCache;
-(void)setAnnotations:(id)arg1 ;
-(void)setUserLocation:(MKUserLocation *)arg1 ;
-(id)mapType;
-(id)centerCoordinate;
-(void)setMapType:(id)arg1 ;
-(id)attributeKeys;
-(void)setCenterCoordinate:(id)arg1 ;
-(void)setLock:(NSLock *)arg1 ;
-(void)log:(id)arg1 ;
-(BOOL)scrollEnabled;
-(id)convertPointToCoordinate:(id)arg1 ;
-(id)convertCoordinateToPoint:(id)arg1 ;
-(void)setBoundsSize:(CGSize)arg1 ;
-(void)denyOnlyThisRequest;
@end

