//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_gmGetGlobalP.hpp"
#include "fn_80135534.hpp"
#include "fn_80135BEC.hpp"
#include "fn_801354B4.hpp"



void fn_8002F868(PPC::Runtime::GCContext* context)
{
/*8002F868 0002C668*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x40, context->r1));
/*8002F86C 0002C66C*/ PPC::Runtime::ASM::mflr(context->r0);
/*8002F870 0002C670*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8002F874 0002C674*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8002F878 0002C678*/ PPC::Runtime::ASM::bl(_savegpr_23);
/*8002F87C 0002C67C*/ PPC::Runtime::ASM::bl(fn_gmGetGlobalP);
/*8002F880 0002C680*/ PPC::Runtime::ASM::addi(context->r30, context->r1, 0xc);
/*8002F884 0002C684*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x1d0);
/*8002F888 0002C688*/ PPC::Runtime::ASM::addi(context->r29, context->r1, 0x9);
/*8002F88C 0002C68C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
/*8002F890 0002C690*/ PPC::Runtime::ASM::b(.L_8002FB18);
RUNTIME_PPC_JUMP_LABEL(.L_8002F894, 0x8002F894) //this is a jump label
/*8002F894 0002C694*/ PPC::Runtime::ASM::li(context->r6, -0x1);
/*8002F898 0002C698*/ PPC::Runtime::ASM::li(context->r8, 0x0);
/*8002F89C 0002C69C*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8002F8A0 0002C6A0*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*8002F8A4 0002C6A4*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r8);
/*8002F8A8 0002C6A8*/ PPC::Runtime::ASM::extsb(context->r3, context->r27);
/*8002F8AC 0002C6AC*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x9, context->r1));
/*8002F8B0 0002C6B0*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8002F8B4 0002C6B4*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa, context->r1));
/*8002F8B8 0002C6B8*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb, context->r1));
/*8002F8BC 0002C6BC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8002F8C0 0002C6C0*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8002F8C4 0002C6C4*/ PPC::Runtime::ASM::and.(context->r0, context->r5, context->r0);
/*8002F8C8 0002C6C8*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/*8002F8CC 0002C6CC*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xe, context->r1));
/*8002F8D0 0002C6D0*/ PPC::Runtime::ASM::stb(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xf, context->r1));
/*8002F8D4 0002C6D4*/ PPC::Runtime::ASM::beq(.L_8002F8F8);
/*8002F8D8 0002C6D8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r31));
/*8002F8DC 0002C6DC*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002F8E0 0002C6E0*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8002F8E4 0002C6E4*/ PPC::Runtime::ASM::bne(.L_8002F8F8);
/*8002F8E8 0002C6E8*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x35, context->r31));
/*8002F8EC 0002C6EC*/ PPC::Runtime::ASM::li(context->r7, 0x1);
/*8002F8F0 0002C6F0*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002F8F4 0002C6F4*/ PPC::Runtime::ASM::stbx(context->r8, context->r30, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002F8F8, 0x8002F8F8) //this is a jump label
/*8002F8F8 0002C6F8*/ PPC::Runtime::ASM::li(context->r8, 0x1);
/*8002F8FC 0002C6FC*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8002F900 0002C700*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r8);
/*8002F904 0002C704*/ PPC::Runtime::ASM::and.(context->r0, context->r5, context->r0);
/*8002F908 0002C708*/ PPC::Runtime::ASM::beq(.L_8002F92C);
/*8002F90C 0002C70C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x26, context->r31));
/*8002F910 0002C710*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002F914 0002C714*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8002F918 0002C718*/ PPC::Runtime::ASM::bne(.L_8002F92C);
/*8002F91C 0002C71C*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x36, context->r31));
/*8002F920 0002C720*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8002F924 0002C724*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002F928 0002C728*/ PPC::Runtime::ASM::stbx(context->r8, context->r30, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002F92C, 0x8002F92C) //this is a jump label
/*8002F92C 0002C72C*/ PPC::Runtime::ASM::li(context->r8, 0x2);
/*8002F930 0002C730*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8002F934 0002C734*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r8);
/*8002F938 0002C738*/ PPC::Runtime::ASM::and.(context->r0, context->r5, context->r0);
/*8002F93C 0002C73C*/ PPC::Runtime::ASM::beq(.L_8002F960);
/*8002F940 0002C740*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x27, context->r31));
/*8002F944 0002C744*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002F948 0002C748*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8002F94C 0002C74C*/ PPC::Runtime::ASM::bne(.L_8002F960);
/*8002F950 0002C750*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x37, context->r31));
/*8002F954 0002C754*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8002F958 0002C758*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002F95C 0002C75C*/ PPC::Runtime::ASM::stbx(context->r8, context->r30, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002F960, 0x8002F960) //this is a jump label
/*8002F960 0002C760*/ PPC::Runtime::ASM::li(context->r8, 0x3);
/*8002F964 0002C764*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*8002F968 0002C768*/ PPC::Runtime::ASM::slw(context->r0, context->r4, context->r8);
/*8002F96C 0002C76C*/ PPC::Runtime::ASM::and.(context->r0, context->r5, context->r0);
/*8002F970 0002C770*/ PPC::Runtime::ASM::beq(.L_8002F994);
/*8002F974 0002C774*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r31));
/*8002F978 0002C778*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002F97C 0002C77C*/ PPC::Runtime::ASM::cmpw(context->r0, context->r3);
/*8002F980 0002C780*/ PPC::Runtime::ASM::bne(.L_8002F994);
/*8002F984 0002C784*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r31));
/*8002F988 0002C788*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8002F98C 0002C78C*/ PPC::Runtime::ASM::extsb(context->r0, context->r0);
/*8002F990 0002C790*/ PPC::Runtime::ASM::stbx(context->r8, context->r30, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002F994, 0x8002F994) //this is a jump label
/*8002F994 0002C794*/ PPC::Runtime::ASM::extsb(context->r0, context->r7);
/*8002F998 0002C798*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*8002F99C 0002C79C*/ PPC::Runtime::ASM::ble(.L_8002FB14);
/*8002F9A0 0002C7A0*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8002F9A4 0002C7A4*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0xc);
/*8002F9A8 0002C7A8*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*8002F9AC 0002C7AC*/ PPC::Runtime::ASM::li(context->r0, -0x1);
/*8002F9B0 0002C7B0*/ PPC::Runtime::ASM::extsb(context->r4, context->r5);
/*8002F9B4 0002C7B4*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8002F9B8 0002C7B8*/ PPC::Runtime::ASM::bne(.L_8002F9C4);
/*8002F9BC 0002C7BC*/ PPC::Runtime::ASM::li(context->r6, 0x1);
/*8002F9C0 0002C7C0*/ PPC::Runtime::ASM::b(.L_8002F9D4);
RUNTIME_PPC_JUMP_LABEL(.L_8002F9C4, 0x8002F9C4) //this is a jump label
/*8002F9C4 0002C7C4*/ PPC::Runtime::ASM::extsb.(context->r4, context->r6);
/*8002F9C8 0002C7C8*/ PPC::Runtime::ASM::beq(.L_8002F9D4);
/*8002F9CC 0002C7CC*/ PPC::Runtime::ASM::stb(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8002F9D0 0002C7D0*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8002F9D4, 0x8002F9D4) //this is a jump label
/*8002F9D4 0002C7D4*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
/*8002F9D8 0002C7D8*/ PPC::Runtime::ASM::extsb(context->r4, context->r5);
/*8002F9DC 0002C7DC*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8002F9E0 0002C7E0*/ PPC::Runtime::ASM::bne(.L_8002F9EC);
/*8002F9E4 0002C7E4*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8002F9E8 0002C7E8*/ PPC::Runtime::ASM::b(.L_8002FA04);
RUNTIME_PPC_JUMP_LABEL(.L_8002F9EC, 0x8002F9EC) //this is a jump label
/*8002F9EC 0002C7EC*/ PPC::Runtime::ASM::extsb.(context->r4, context->r6);
/*8002F9F0 0002C7F0*/ PPC::Runtime::ASM::beq(.L_8002FA04);
/*8002F9F4 0002C7F4*/ PPC::Runtime::ASM::extsb(context->r4, context->r6);
/*8002F9F8 0002C7F8*/ PPC::Runtime::ASM::subfic(context->r4, context->r4, 0x1);
/*8002F9FC 0002C7FC*/ PPC::Runtime::ASM::stbx(context->r5, context->r3, context->r4);
/*8002FA00 0002C800*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xd, context->r1));
RUNTIME_PPC_JUMP_LABEL(.L_8002FA04, 0x8002FA04) //this is a jump label
/*8002FA04 0002C804*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
/*8002FA08 0002C808*/ PPC::Runtime::ASM::extsb(context->r4, context->r5);
/*8002FA0C 0002C80C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8002FA10 0002C810*/ PPC::Runtime::ASM::bne(.L_8002FA1C);
/*8002FA14 0002C814*/ PPC::Runtime::ASM::addi(context->r6, context->r6, 0x1);
/*8002FA18 0002C818*/ PPC::Runtime::ASM::b(.L_8002FA34);
RUNTIME_PPC_JUMP_LABEL(.L_8002FA1C, 0x8002FA1C) //this is a jump label
/*8002FA1C 0002C81C*/ PPC::Runtime::ASM::extsb.(context->r4, context->r6);
/*8002FA20 0002C820*/ PPC::Runtime::ASM::beq(.L_8002FA34);
/*8002FA24 0002C824*/ PPC::Runtime::ASM::extsb(context->r4, context->r6);
/*8002FA28 0002C828*/ PPC::Runtime::ASM::subfic(context->r4, context->r4, 0x2);
/*8002FA2C 0002C82C*/ PPC::Runtime::ASM::stbx(context->r5, context->r3, context->r4);
/*8002FA30 0002C830*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8002FA34, 0x8002FA34) //this is a jump label
/*8002FA34 0002C834*/ PPC::Runtime::ASM::lbz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r30));
/*8002FA38 0002C838*/ PPC::Runtime::ASM::extsb(context->r4, context->r5);
/*8002FA3C 0002C83C*/ PPC::Runtime::ASM::cmpwi(context->r4, -0x1);
/*8002FA40 0002C840*/ PPC::Runtime::ASM::bne(.L_8002FA48);
/*8002FA44 0002C844*/ PPC::Runtime::ASM::b(.L_8002FA60);
RUNTIME_PPC_JUMP_LABEL(.L_8002FA48, 0x8002FA48) //this is a jump label
/*8002FA48 0002C848*/ PPC::Runtime::ASM::extsb.(context->r4, context->r6);
/*8002FA4C 0002C84C*/ PPC::Runtime::ASM::beq(.L_8002FA60);
/*8002FA50 0002C850*/ PPC::Runtime::ASM::extsb(context->r4, context->r6);
/*8002FA54 0002C854*/ PPC::Runtime::ASM::subfic(context->r4, context->r4, 0x3);
/*8002FA58 0002C858*/ PPC::Runtime::ASM::stbx(context->r5, context->r3, context->r4);
/*8002FA5C 0002C85C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x3, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_8002FA60, 0x8002FA60) //this is a jump label
/*8002FA60 0002C860*/ PPC::Runtime::ASM::extsb(context->r3, context->r7);
/*8002FA64 0002C864*/ PPC::Runtime::ASM::mr(context->r5, context->r30);
/*8002FA68 0002C868*/ PPC::Runtime::ASM::subi(context->r28, context->r3, 0x1);
/*8002FA6C 0002C86C*/ PPC::Runtime::ASM::li(context->r7, 0x0);
/*8002FA70 0002C870*/ PPC::Runtime::ASM::extsb.(context->r4, context->r28);
/*8002FA74 0002C874*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*8002FA78 0002C878*/ PPC::Runtime::ASM::addi(context->r0, context->r4, 0x1);
/*8002FA7C 0002C87C*/ PPC::Runtime::ASM::mtctr(context->r0);
/*8002FA80 0002C880*/ PPC::Runtime::ASM::blt(.L_8002FAA8);
RUNTIME_PPC_JUMP_LABEL(.L_8002FA84, 0x8002FA84) //this is a jump label
/*8002FA84 0002C884*/ PPC::Runtime::ASM::lbz(context->r6, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r5));
/*8002FA88 0002C888*/ PPC::Runtime::ASM::extsb(context->r0, context->r6);
/*8002FA8C 0002C88C*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8002FA90 0002C890*/ PPC::Runtime::ASM::beq(.L_8002FA9C);
/*8002FA94 0002C894*/ PPC::Runtime::ASM::subf(context->r0, context->r7, context->r4);
/*8002FA98 0002C898*/ PPC::Runtime::ASM::stbx(context->r6, context->r3, context->r0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FA9C, 0x8002FA9C) //this is a jump label
/*8002FA9C 0002C89C*/ PPC::Runtime::ASM::addi(context->r5, context->r5, 0x1);
/*8002FAA0 0002C8A0*/ PPC::Runtime::ASM::addi(context->r7, context->r7, 0x1);
/*8002FAA4 0002C8A4*/ PPC::Runtime::ASM::bdnz(.L_8002FA84);
RUNTIME_PPC_JUMP_LABEL(.L_8002FAA8, 0x8002FAA8) //this is a jump label
/*8002FAA8 0002C8A8*/ PPC::Runtime::ASM::mr(context->r26, context->r29);
/*8002FAAC 0002C8AC*/ PPC::Runtime::ASM::addi(context->r25, context->r1, 0x8);
/*8002FAB0 0002C8B0*/ PPC::Runtime::ASM::li(context->r24, 0x1);
/*8002FAB4 0002C8B4*/ PPC::Runtime::ASM::li(context->r23, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_8002FAB8, 0x8002FAB8) //this is a jump label
/*8002FAB8 0002C8B8*/ PPC::Runtime::ASM::lbzx(context->r4, context->r25, context->r23);
/*8002FABC 0002C8BC*/ PPC::Runtime::ASM::extsb(context->r0, context->r4);
/*8002FAC0 0002C8C0*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8002FAC4 0002C8C4*/ PPC::Runtime::ASM::bne(.L_8002FAD0);
/*8002FAC8 0002C8C8*/ PPC::Runtime::ASM::addi(context->r23, context->r23, 0x1);
/*8002FACC 0002C8CC*/ PPC::Runtime::ASM::b(.L_8002FAF4);
RUNTIME_PPC_JUMP_LABEL(.L_8002FAD0, 0x8002FAD0) //this is a jump label
/*8002FAD0 0002C8D0*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8002FAD4 0002C8D4*/ PPC::Runtime::ASM::extsb(context->r0, context->r3);
/*8002FAD8 0002C8D8*/ PPC::Runtime::ASM::cmpwi(context->r0, -0x1);
/*8002FADC 0002C8DC*/ PPC::Runtime::ASM::beq(.L_8002FAF4);
/*8002FAE0 0002C8E0*/ PPC::Runtime::ASM::bl(fn_80135534);
/*8002FAE4 0002C8E4*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r26));
/*8002FAE8 0002C8E8*/ PPC::Runtime::ASM::lbzx(context->r4, context->r25, context->r23);
/*8002FAEC 0002C8EC*/ PPC::Runtime::ASM::bl(fn_80135BEC);
/*8002FAF0 0002C8F0*/ PPC::Runtime::ASM::mr(context->r23, context->r24);
RUNTIME_PPC_JUMP_LABEL(.L_8002FAF4, 0x8002FAF4) //this is a jump label
/*8002FAF4 0002C8F4*/ PPC::Runtime::ASM::addi(context->r24, context->r24, 0x1);
/*8002FAF8 0002C8F8*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x1);
/*8002FAFC 0002C8FC*/ PPC::Runtime::ASM::cmpwi(context->r24, 0x4);
/*8002FB00 0002C900*/ PPC::Runtime::ASM::blt(.L_8002FAB8);
/*8002FB04 0002C904*/ PPC::Runtime::ASM::mr(context->r3, context->r27);
/*8002FB08 0002C908*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*8002FB0C 0002C90C*/ PPC::Runtime::ASM::extsb(context->r5, context->r28);
/*8002FB10 0002C910*/ PPC::Runtime::ASM::bl(fn_801354B4);
RUNTIME_PPC_JUMP_LABEL(.L_8002FB14, 0x8002FB14) //this is a jump label
/*8002FB14 0002C914*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
RUNTIME_PPC_JUMP_LABEL(.L_8002FB18, 0x8002FB18) //this is a jump label
/*8002FB18 0002C918*/ PPC::Runtime::ASM::extsb(context->r0, context->r27);
/*8002FB1C 0002C91C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*8002FB20 0002C920*/ PPC::Runtime::ASM::blt(.L_8002F894);
/*8002FB24 0002C924*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x40);
/*8002FB28 0002C928*/ PPC::Runtime::ASM::bl(_restgpr_23);
/*8002FB2C 0002C92C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x44, context->r1));
/*8002FB30 0002C930*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8002FB34 0002C934*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x40);
/*8002FB38 0002C938*/ PPC::Runtime::ASM::blr();
}