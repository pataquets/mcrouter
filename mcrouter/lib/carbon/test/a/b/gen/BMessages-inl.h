/*
 *  Copyright (c) 2017-present, Facebook, Inc.
 *
 *  This source code is licensed under the MIT license found in the LICENSE
 *  file in the root directory of this source tree.
 *
 */

/*
 *  THIS FILE IS AUTOGENERATED. DO NOT MODIFY IT; ALL CHANGES WILL BE LOST IN
 *  VAIN.
 *
 *  @generated
 */

namespace carbon {
namespace test2 {
namespace util {

template <class Writer>
void SimpleStruct::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, member1());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void SimpleStruct::visitFields(V&& v) {
  if (!v.visitField(1, "member1", this->member1())) {
    return;
  }
}

template <class V>
void SimpleStruct::visitFields(V&& v) const {
  if (!v.visitField(1, "member1", this->member1())) {
    return;
  }
}

template <class Writer>
void SimpleUnion::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  switch (_which_) {
    case 1: {
      writer.writeFieldAlways(1 /* field id */, umember1());
      break;
    }
    case 2: {
      writer.writeFieldAlways(2 /* field id */, umember2());
      break;
    }
    case 3: {
      writer.writeFieldAlways(3 /* field id */, umember3());
      break;
    }
    default:
      break;
  }
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void SimpleUnion::visitFields(V&& v) {
  switch (_which_) {
    case 1:
      v.visitField(1, "umember1", umember1());
      break;
    case 2:
      v.visitField(2, "umember2", umember2());
      break;
    case 3:
      v.visitField(3, "umember3", umember3());
      break;
    default:
      break;
  }
}

template <class V>
void SimpleUnion::visitFields(V&& v) const {
  switch (_which_) {
    case 1:
      v.visitField(1, "umember1", umember1());
      break;
    case 2:
      v.visitField(2, "umember2", umember2());
      break;
    case 3:
      v.visitField(3, "umember3", umember3());
      break;
    default:
      break;
  }
}

template <class V>
void SimpleUnion::foreachMember(V&& v) {
  if (!v.template visitUnionMember<int64_t>("umember1", [this]() -> int64_t& {return this->emplace<1>();})) {
    return;
  }
  if (!v.template visitUnionMember<bool>("umember2", [this]() -> bool& {return this->emplace<2>();})) {
    return;
  }
  if (!v.template visitUnionMember<std::string>("umember3", [this]() -> std::string& {return this->emplace<3>();})) {
    return;
  }
}

template <class Writer>
void YetAnotherRequest::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, key());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void YetAnotherRequest::visitFields(V&& v) {
  if (!v.visitField(1, "key", this->key())) {
    return;
  }
}

template <class V>
void YetAnotherRequest::visitFields(V&& v) const {
  if (!v.visitField(1, "key", this->key())) {
    return;
  }
}

template <class Writer>
void YetAnotherReply::serialize(Writer&& writer) const {
  writer.writeStructBegin();
  writer.writeField(1 /* field id */, result());
  writer.writeFieldStop();
  writer.writeStructEnd();
}

template <class V>
void YetAnotherReply::visitFields(V&& v) {
  if (!v.visitField(1, "result", this->result())) {
    return;
  }
}

template <class V>
void YetAnotherReply::visitFields(V&& v) const {
  if (!v.visitField(1, "result", this->result())) {
    return;
  }
}
} // namespace util
} // namespace test2
} // namespace carbon
