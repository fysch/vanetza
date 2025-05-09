include(UseGTest)
configure_gtest_directory(LINK_LIBRARIES geonet)

add_gtest(Address address.cpp)
add_gtest(Areas areas.cpp)
add_gtest(BasicHeader basic_header.cpp)
add_gtest(CbfPacketBuffer cbf_packet_buffer.cpp)
add_gtest(CbrAggregator cbr_aggregator.cpp)
add_gtest(CommonHeader common_header.cpp)
add_gtest(DataConfirm data_confirm.cpp)
add_gtest(DataRequest data_request.cpp)
add_gtest(DccMcoField dcc_mco_field.cpp)
add_gtest(DuplicatePacketList duplicate_packet_list.cpp)
add_gtest(GbcGacHeader gbc_gac_header.cpp)
add_gtest(GbcMemory
    SOURCES gbc_memory.cpp network_topology.cpp
    LINK_LIBRARIES GeographicLib::GeographicLib)
add_gtest(Lifetime lifetime.cpp)
add_gtest(LocationTable location_table.cpp)
add_gtest(PacketBuffer packet_buffer.cpp)
add_gtest(PositionUpdater position_updater.cpp)
add_gtest(PositionVector position_vector.cpp)
add_gtest(Repeater repeater.cpp)
add_gtest(Router router.cpp)
add_gtest(RouterIndicate router_indicate.cpp
    INCLUDE_DIRECTORIES ${PROJECT_SOURCE_DIR}/vanetza/security/tests)
add_gtest(SequenceNumber sequence_number.cpp)
add_gtest(Timestamp timestamp.cpp)
add_gtest(TrafficClass traffic_class.cpp)
add_gtest(Routing
    SOURCES network_topology.cpp routing.cpp
    LINK_LIBRARIES GeographicLib::GeographicLib)
add_gtest(RouterRequest router_request.cpp)
