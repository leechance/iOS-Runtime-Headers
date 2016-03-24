/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface _MKQuickRouteManager : NSObject {
    double _closeWalkTravelTime;
    struct { 
        double latitude; 
        double longitude; 
    } _coordinate;
    <MKQuickRouteManagerDelegate> *_delegate;
    NSMutableDictionary *_etaResults;
    BOOL _fetchAllTransportTypes;
    MKDirections *_inProgressETAUpdate;
    _MKRouteETA *_lastETA;
    BOOL _lastETAUpdateHadError;
    NSError *_lastError;
    unsigned int _lastPreferredDirectionsType;
    double _lastRequestTime;
    struct { 
        double latitude; 
        double longitude; 
    } _lastUpdatedETAOriginCoordinate;
    double _lastUpdatedETATime;
    MKMapItem *_mapItem;
    double _maxDistanceToRequestETA;
    double _maxWalkingDistance;
    MKMapItem *_originMapItem;
    double _staleDistance;
    double _staleTimeInterval;
    GEOTransitOptions *_transitOptions;
    NSObject<MKQuickRouteConfigurableView> *_view;
    BOOL _viewHasChangedSinceLastUpdate;
}

@property (nonatomic) struct { double x1; double x2; } coordinate;
@property (nonatomic) <MKQuickRouteManagerDelegate> *delegate;
@property (nonatomic) BOOL fetchAllTransportTypes;
@property (nonatomic, retain) MKMapItem *mapItem;
@property (getter=isOnlyDriving, nonatomic, readonly) BOOL onlyDriving;
@property (nonatomic, retain) MKMapItem *originMapItem;
@property (nonatomic, copy) GEOTransitOptions *transitOptions;
@property (nonatomic, readonly) unsigned int transportType;
@property (getter=isUsingCurrentLocationForOrigin, nonatomic, readonly) BOOL usingCurrentLocationForOrigin;
@property (nonatomic) NSObject<MKQuickRouteConfigurableView> *view;

+ (unsigned int)counterpartForTransportType:(unsigned int)arg1;
+ (unsigned int)directionsTypeForMapItem:(id)arg1 delegate:(id)arg2 mapType:(unsigned int)arg3;

- (void).cxx_destruct;
- (void)_resetState;
- (id)bestETAForPreferredDirectionsType:(unsigned int)arg1;
- (struct { double x1; double x2; })coordinate;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (struct { double x1; double x2; })destinationCoordinate;
- (unsigned int)directionsTypeForMapType:(unsigned int)arg1;
- (unsigned int)directionsTypeForOriginCoordinate:(struct { double x1; double x2; })arg1 destinationCoordinate:(struct { double x1; double x2; })arg2 preferredDirectionsType:(unsigned int)arg3;
- (void)expireETAsIfNoLongerValid;
- (BOOL)fetchAllTransportTypes;
- (unsigned int)guessTransportTypeForDistance:(double)arg1 preferredDirectionsType:(unsigned int)arg2;
- (BOOL)haveETAsForPreferredTransportType:(unsigned int)arg1;
- (id)init;
- (void)invalidateETAForTransportType:(unsigned int)arg1;
- (BOOL)isOnlyDriving;
- (BOOL)isUsingCurrentLocationForOrigin;
- (BOOL)isValidETA:(id)arg1;
- (void)loadETAsFromMapItemForTransportType:(unsigned int)arg1;
- (id)mapItem;
- (struct { double x1; double x2; })originCoordinate;
- (id)originMapItem;
- (void)requestNewETAForPreferredTransportType:(unsigned int)arg1 completion:(id /* block */)arg2;
- (id)routeETAForTransportType:(unsigned int)arg1;
- (void)setCoordinate:(struct { double x1; double x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFetchAllTransportTypes:(BOOL)arg1;
- (void)setMapItem:(id)arg1;
- (void)setOriginMapItem:(id)arg1;
- (void)setTransitOptions:(id)arg1;
- (void)setView:(id)arg1;
- (BOOL)shouldUpdateEstimatedTravelTimeForNewOrigin:(struct { double x1; double x2; })arg1 transportType:(unsigned int)arg2;
- (id)transitOptions;
- (unsigned int)transportType;
- (void)updateETA;
- (id)view;

@end
