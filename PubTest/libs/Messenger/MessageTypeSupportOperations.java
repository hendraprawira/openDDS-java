package Messenger;
public interface MessageTypeSupportOperations extends OpenDDS.DCPS.TypeSupportOperations {
  int encode_to_string(Messenger.Message sample, org.omg.CORBA.StringHolder encoded, OpenDDS.DCPS.RepresentationFormat format);
  int encode_to_bytes(Messenger.Message sample, DDS.OctetSeqHolder encoded, OpenDDS.DCPS.RepresentationFormat format);
  int decode_from_string(String encoded, Messenger.MessageHolder sample, OpenDDS.DCPS.RepresentationFormat format);
  int decode_from_bytes(byte[] encoded, Messenger.MessageHolder sample, OpenDDS.DCPS.RepresentationFormat format);
}
