//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_HSD_TExpGetType.hpp"
#include "fn_HSD_TExpUnref.hpp"
#include "fn_HSD_TExpUnref.hpp"
#include "fn_HSD_TExpGetType.hpp"
#include "fn_HSD_TExpUnref.hpp"
#include "fn_HSD_TExpUnref.hpp"
#include "fn_HSD_TExpGetType.hpp"
#include "fn_HSD_TExpUnref.hpp"
#include "fn_HSD_TExpUnref.hpp"
#include "fn_HSD_TExpGetType.hpp"
#include "fn_HSD_TExpUnref.hpp"
#include "fn_HSD_TExpUnref.hpp"



void fn_HSD_TExpUnref(PPC::Runtime::GCContext* context)
{
/*80421884 0041E684*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*80421888 0041E688*/ PPC::Runtime::ASM::mflr(context->r0);
/*8042188C 0041E68C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80421890 0041E690*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80421894 0041E694*/ PPC::Runtime::ASM::bl(_savegpr_26);
/*80421898 0041E698*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*8042189C 0041E69C*/ PPC::Runtime::ASM::bne(.L_804218A8);
/*804218A0 0041E6A0*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*804218A4 0041E6A4*/ PPC::Runtime::ASM::b(.L_804218D0);
RUNTIME_PPC_JUMP_LABEL(.L_804218A8, 0x804218A8) //this is a jump label
/*804218A8 0041E6A8*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x1);
/*804218AC 0041E6AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*804218B0 0041E6B0*/ PPC::Runtime::ASM::bne(.L_804218BC);
/*804218B4 0041E6B4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*804218B8 0041E6B8*/ PPC::Runtime::ASM::b(.L_804218D0);
RUNTIME_PPC_JUMP_LABEL(.L_804218BC, 0x804218BC) //this is a jump label
/*804218BC 0041E6BC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*804218C0 0041E6C0*/ PPC::Runtime::ASM::bne(.L_804218CC);
/*804218C4 0041E6C4*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*804218C8 0041E6C8*/ PPC::Runtime::ASM::b(.L_804218D0);
RUNTIME_PPC_JUMP_LABEL(.L_804218CC, 0x804218CC) //this is a jump label
/*804218CC 0041E6CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_804218D0, 0x804218D0) //this is a jump label
/*804218D0 0041E6D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*804218D4 0041E6D4*/ PPC::Runtime::ASM::beq(.L_80421DD4);
/*804218D8 0041E6D8*/ PPC::Runtime::ASM::bge(.L_80421DE8);
/*804218DC 0041E6DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*804218E0 0041E6E0*/ PPC::Runtime::ASM::beq(.L_804218E8);
/*804218E4 0041E6E4*/ PPC::Runtime::ASM::b(.L_80421DE8);
RUNTIME_PPC_JUMP_LABEL(.L_804218E8, 0x804218E8) //this is a jump label
/*804218E8 0041E6E8*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r4, 24);
/*804218EC 0041E6EC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x1);
/*804218F0 0041E6F0*/ PPC::Runtime::ASM::bne(.L_8042190C);
/*804218F4 0041E6F4*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*804218F8 0041E6F8*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*804218FC 0041E6FC*/ PPC::Runtime::ASM::beq(.L_80421920);
/*80421900 0041E700*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80421904 0041E704*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80421908 0041E708*/ PPC::Runtime::ASM::b(.L_80421920);
RUNTIME_PPC_JUMP_LABEL(.L_8042190C, 0x8042190C) //this is a jump label
/*8042190C 0041E70C*/ PPC::Runtime::ASM::lwz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80421910 0041E710*/ PPC::Runtime::ASM::cmpwi(context->r4, 0x0);
/*80421914 0041E714*/ PPC::Runtime::ASM::beq(.L_80421920);
/*80421918 0041E718*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*8042191C 0041E71C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80421920, 0x80421920) //this is a jump label
/*80421920 0041E720*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r3));
/*80421924 0041E724*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421928 0041E728*/ PPC::Runtime::ASM::bne(.L_80421DE8);
/*8042192C 0041E72C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r3));
/*80421930 0041E730*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421934 0041E734*/ PPC::Runtime::ASM::bne(.L_80421DE8);
/*80421938 0041E738*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*8042193C 0041E73C*/ PPC::Runtime::ASM::mr(context->r29, context->r3);
RUNTIME_PPC_JUMP_LABEL(.L_80421940, 0x80421940) //this is a jump label
/*80421940 0041E740*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r29));
/*80421944 0041E744*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r29));
/*80421948 0041E748*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8042194C 0041E74C*/ PPC::Runtime::ASM::bne(.L_80421958);
/*80421950 0041E750*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80421954 0041E754*/ PPC::Runtime::ASM::b(.L_80421980);
RUNTIME_PPC_JUMP_LABEL(.L_80421958, 0x80421958) //this is a jump label
/*80421958 0041E758*/ PPC::Runtime::ASM::addis(context->r0, context->r30, 0x1);
/*8042195C 0041E75C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80421960 0041E760*/ PPC::Runtime::ASM::bne(.L_8042196C);
/*80421964 0041E764*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80421968 0041E768*/ PPC::Runtime::ASM::b(.L_80421980);
RUNTIME_PPC_JUMP_LABEL(.L_8042196C, 0x8042196C) //this is a jump label
/*8042196C 0041E76C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*80421970 0041E770*/ PPC::Runtime::ASM::bne(.L_8042197C);
/*80421974 0041E774*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80421978 0041E778*/ PPC::Runtime::ASM::b(.L_80421980);
RUNTIME_PPC_JUMP_LABEL(.L_8042197C, 0x8042197C) //this is a jump label
/*8042197C 0041E77C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80421980, 0x80421980) //this is a jump label
/*80421980 0041E780*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80421984 0041E784*/ PPC::Runtime::ASM::beq(.L_80421B6C);
/*80421988 0041E788*/ PPC::Runtime::ASM::bge(.L_80421B80);
/*8042198C 0041E78C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80421990 0041E790*/ PPC::Runtime::ASM::beq(.L_80421998);
/*80421994 0041E794*/ PPC::Runtime::ASM::b(.L_80421B80);
RUNTIME_PPC_JUMP_LABEL(.L_80421998, 0x80421998) //this is a jump label
/*80421998 0041E798*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*8042199C 0041E79C*/ PPC::Runtime::ASM::bne(.L_804219B8);
/*804219A0 0041E7A0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*804219A4 0041E7A4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804219A8 0041E7A8*/ PPC::Runtime::ASM::beq(.L_804219CC);
/*804219AC 0041E7AC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*804219B0 0041E7B0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*804219B4 0041E7B4*/ PPC::Runtime::ASM::b(.L_804219CC);
RUNTIME_PPC_JUMP_LABEL(.L_804219B8, 0x804219B8) //this is a jump label
/*804219B8 0041E7B8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*804219BC 0041E7BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*804219C0 0041E7C0*/ PPC::Runtime::ASM::beq(.L_804219CC);
/*804219C4 0041E7C4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*804219C8 0041E7C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_804219CC, 0x804219CC) //this is a jump label
/*804219CC 0041E7CC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*804219D0 0041E7D0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804219D4 0041E7D4*/ PPC::Runtime::ASM::bne(.L_80421B80);
/*804219D8 0041E7D8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*804219DC 0041E7DC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*804219E0 0041E7E0*/ PPC::Runtime::ASM::bne(.L_80421B80);
/*804219E4 0041E7E4*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_804219E8, 0x804219E8) //this is a jump label
/*804219E8 0041E7E8*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*804219EC 0041E7EC*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*804219F0 0041E7F0*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*804219F4 0041E7F4*/ PPC::Runtime::ASM::bl(fn_HSD_TExpGetType);
/*804219F8 0041E7F8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*804219FC 0041E7FC*/ PPC::Runtime::ASM::beq(.L_80421A8C);
/*80421A00 0041E800*/ PPC::Runtime::ASM::bge(.L_80421AA0);
/*80421A04 0041E804*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80421A08 0041E808*/ PPC::Runtime::ASM::beq(.L_80421A10);
/*80421A0C 0041E80C*/ PPC::Runtime::ASM::b(.L_80421AA0);
RUNTIME_PPC_JUMP_LABEL(.L_80421A10, 0x80421A10) //this is a jump label
/*80421A10 0041E810*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x1);
/*80421A14 0041E814*/ PPC::Runtime::ASM::bne(.L_80421A30);
/*80421A18 0041E818*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421A1C 0041E81C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421A20 0041E820*/ PPC::Runtime::ASM::beq(.L_80421A44);
/*80421A24 0041E824*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421A28 0041E828*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421A2C 0041E82C*/ PPC::Runtime::ASM::b(.L_80421A44);
RUNTIME_PPC_JUMP_LABEL(.L_80421A30, 0x80421A30) //this is a jump label
/*80421A30 0041E830*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80421A34 0041E834*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421A38 0041E838*/ PPC::Runtime::ASM::beq(.L_80421A44);
/*80421A3C 0041E83C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421A40 0041E840*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80421A44, 0x80421A44) //this is a jump label
/*80421A44 0041E844*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421A48 0041E848*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421A4C 0041E84C*/ PPC::Runtime::ASM::bne(.L_80421AA0);
/*80421A50 0041E850*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80421A54 0041E854*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421A58 0041E858*/ PPC::Runtime::ASM::bne(.L_80421AA0);
/*80421A5C 0041E85C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80421A60, 0x80421A60) //this is a jump label
/*80421A60 0041E860*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*80421A64 0041E864*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r26));
/*80421A68 0041E868*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80421A6C 0041E86C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r26));
/*80421A70 0041E870*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r26));
/*80421A74 0041E874*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80421A78 0041E878*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*80421A7C 0041E87C*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x8);
/*80421A80 0041E880*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*80421A84 0041E884*/ PPC::Runtime::ASM::blt(.L_80421A60);
/*80421A88 0041E888*/ PPC::Runtime::ASM::b(.L_80421AA0);
RUNTIME_PPC_JUMP_LABEL(.L_80421A8C, 0x80421A8C) //this is a jump label
/*80421A8C 0041E88C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*80421A90 0041E890*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80421A94 0041E894*/ PPC::Runtime::ASM::beq(.L_80421AA0);
/*80421A98 0041E898*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421A9C 0041E89C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80421AA0, 0x80421AA0) //this is a jump label
/*80421AA0 0041E8A0*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80421AA4 0041E8A4*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80421AA8 0041E8A8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80421AAC 0041E8AC*/ PPC::Runtime::ASM::bl(fn_HSD_TExpGetType);
/*80421AB0 0041E8B0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80421AB4 0041E8B4*/ PPC::Runtime::ASM::beq(.L_80421B44);
/*80421AB8 0041E8B8*/ PPC::Runtime::ASM::bge(.L_80421B58);
/*80421ABC 0041E8BC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80421AC0 0041E8C0*/ PPC::Runtime::ASM::beq(.L_80421AC8);
/*80421AC4 0041E8C4*/ PPC::Runtime::ASM::b(.L_80421B58);
RUNTIME_PPC_JUMP_LABEL(.L_80421AC8, 0x80421AC8) //this is a jump label
/*80421AC8 0041E8C8*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x1);
/*80421ACC 0041E8CC*/ PPC::Runtime::ASM::bne(.L_80421AE8);
/*80421AD0 0041E8D0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421AD4 0041E8D4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421AD8 0041E8D8*/ PPC::Runtime::ASM::beq(.L_80421AFC);
/*80421ADC 0041E8DC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421AE0 0041E8E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421AE4 0041E8E4*/ PPC::Runtime::ASM::b(.L_80421AFC);
RUNTIME_PPC_JUMP_LABEL(.L_80421AE8, 0x80421AE8) //this is a jump label
/*80421AE8 0041E8E8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80421AEC 0041E8EC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421AF0 0041E8F0*/ PPC::Runtime::ASM::beq(.L_80421AFC);
/*80421AF4 0041E8F4*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421AF8 0041E8F8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80421AFC, 0x80421AFC) //this is a jump label
/*80421AFC 0041E8FC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421B00 0041E900*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421B04 0041E904*/ PPC::Runtime::ASM::bne(.L_80421B58);
/*80421B08 0041E908*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80421B0C 0041E90C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421B10 0041E910*/ PPC::Runtime::ASM::bne(.L_80421B58);
/*80421B14 0041E914*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80421B18, 0x80421B18) //this is a jump label
/*80421B18 0041E918*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*80421B1C 0041E91C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r26));
/*80421B20 0041E920*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80421B24 0041E924*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r26));
/*80421B28 0041E928*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r26));
/*80421B2C 0041E92C*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80421B30 0041E930*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*80421B34 0041E934*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x8);
/*80421B38 0041E938*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*80421B3C 0041E93C*/ PPC::Runtime::ASM::blt(.L_80421B18);
/*80421B40 0041E940*/ PPC::Runtime::ASM::b(.L_80421B58);
RUNTIME_PPC_JUMP_LABEL(.L_80421B44, 0x80421B44) //this is a jump label
/*80421B44 0041E944*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*80421B48 0041E948*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80421B4C 0041E94C*/ PPC::Runtime::ASM::beq(.L_80421B58);
/*80421B50 0041E950*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421B54 0041E954*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80421B58, 0x80421B58) //this is a jump label
/*80421B58 0041E958*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80421B5C 0041E95C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x8);
/*80421B60 0041E960*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*80421B64 0041E964*/ PPC::Runtime::ASM::blt(.L_804219E8);
/*80421B68 0041E968*/ PPC::Runtime::ASM::b(.L_80421B80);
RUNTIME_PPC_JUMP_LABEL(.L_80421B6C, 0x80421B6C) //this is a jump label
/*80421B6C 0041E96C*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80421B70 0041E970*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80421B74 0041E974*/ PPC::Runtime::ASM::beq(.L_80421B80);
/*80421B78 0041E978*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421B7C 0041E97C*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80421B80, 0x80421B80) //this is a jump label
/*80421B80 0041E980*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r29));
/*80421B84 0041E984*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r29));
/*80421B88 0041E988*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80421B8C 0041E98C*/ PPC::Runtime::ASM::bne(.L_80421B98);
/*80421B90 0041E990*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*80421B94 0041E994*/ PPC::Runtime::ASM::b(.L_80421BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80421B98, 0x80421B98) //this is a jump label
/*80421B98 0041E998*/ PPC::Runtime::ASM::addis(context->r0, context->r30, 0x1);
/*80421B9C 0041E99C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*80421BA0 0041E9A0*/ PPC::Runtime::ASM::bne(.L_80421BAC);
/*80421BA4 0041E9A4*/ PPC::Runtime::ASM::li(context->r0, 0x2);
/*80421BA8 0041E9A8*/ PPC::Runtime::ASM::b(.L_80421BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80421BAC, 0x80421BAC) //this is a jump label
/*80421BAC 0041E9AC*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xfffe);
/*80421BB0 0041E9B0*/ PPC::Runtime::ASM::bne(.L_80421BBC);
/*80421BB4 0041E9B4*/ PPC::Runtime::ASM::li(context->r0, 0x3);
/*80421BB8 0041E9B8*/ PPC::Runtime::ASM::b(.L_80421BC0);
RUNTIME_PPC_JUMP_LABEL(.L_80421BBC, 0x80421BBC) //this is a jump label
/*80421BBC 0041E9BC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80421BC0, 0x80421BC0) //this is a jump label
/*80421BC0 0041E9C0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x4);
/*80421BC4 0041E9C4*/ PPC::Runtime::ASM::beq(.L_80421DAC);
/*80421BC8 0041E9C8*/ PPC::Runtime::ASM::bge(.L_80421DC0);
/*80421BCC 0041E9CC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x1);
/*80421BD0 0041E9D0*/ PPC::Runtime::ASM::beq(.L_80421BD8);
/*80421BD4 0041E9D4*/ PPC::Runtime::ASM::b(.L_80421DC0);
RUNTIME_PPC_JUMP_LABEL(.L_80421BD8, 0x80421BD8) //this is a jump label
/*80421BD8 0041E9D8*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x1);
/*80421BDC 0041E9DC*/ PPC::Runtime::ASM::bne(.L_80421BF8);
/*80421BE0 0041E9E0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80421BE4 0041E9E4*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421BE8 0041E9E8*/ PPC::Runtime::ASM::beq(.L_80421C0C);
/*80421BEC 0041E9EC*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421BF0 0041E9F0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80421BF4 0041E9F4*/ PPC::Runtime::ASM::b(.L_80421C0C);
RUNTIME_PPC_JUMP_LABEL(.L_80421BF8, 0x80421BF8) //this is a jump label
/*80421BF8 0041E9F8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80421BFC 0041E9FC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421C00 0041EA00*/ PPC::Runtime::ASM::beq(.L_80421C0C);
/*80421C04 0041EA04*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421C08 0041EA08*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80421C0C, 0x80421C0C) //this is a jump label
/*80421C0C 0041EA0C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r30));
/*80421C10 0041EA10*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421C14 0041EA14*/ PPC::Runtime::ASM::bne(.L_80421DC0);
/*80421C18 0041EA18*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r30));
/*80421C1C 0041EA1C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421C20 0041EA20*/ PPC::Runtime::ASM::bne(.L_80421DC0);
/*80421C24 0041EA24*/ PPC::Runtime::ASM::li(context->r31, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80421C28, 0x80421C28) //this is a jump label
/*80421C28 0041EA28*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80421C2C 0041EA2C*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r30));
/*80421C30 0041EA30*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80421C34 0041EA34*/ PPC::Runtime::ASM::bl(fn_HSD_TExpGetType);
/*80421C38 0041EA38*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80421C3C 0041EA3C*/ PPC::Runtime::ASM::beq(.L_80421CCC);
/*80421C40 0041EA40*/ PPC::Runtime::ASM::bge(.L_80421CE0);
/*80421C44 0041EA44*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80421C48 0041EA48*/ PPC::Runtime::ASM::beq(.L_80421C50);
/*80421C4C 0041EA4C*/ PPC::Runtime::ASM::b(.L_80421CE0);
RUNTIME_PPC_JUMP_LABEL(.L_80421C50, 0x80421C50) //this is a jump label
/*80421C50 0041EA50*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x1);
/*80421C54 0041EA54*/ PPC::Runtime::ASM::bne(.L_80421C70);
/*80421C58 0041EA58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421C5C 0041EA5C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421C60 0041EA60*/ PPC::Runtime::ASM::beq(.L_80421C84);
/*80421C64 0041EA64*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421C68 0041EA68*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421C6C 0041EA6C*/ PPC::Runtime::ASM::b(.L_80421C84);
RUNTIME_PPC_JUMP_LABEL(.L_80421C70, 0x80421C70) //this is a jump label
/*80421C70 0041EA70*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80421C74 0041EA74*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421C78 0041EA78*/ PPC::Runtime::ASM::beq(.L_80421C84);
/*80421C7C 0041EA7C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421C80 0041EA80*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80421C84, 0x80421C84) //this is a jump label
/*80421C84 0041EA84*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421C88 0041EA88*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421C8C 0041EA8C*/ PPC::Runtime::ASM::bne(.L_80421CE0);
/*80421C90 0041EA90*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80421C94 0041EA94*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421C98 0041EA98*/ PPC::Runtime::ASM::bne(.L_80421CE0);
/*80421C9C 0041EA9C*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80421CA0, 0x80421CA0) //this is a jump label
/*80421CA0 0041EAA0*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*80421CA4 0041EAA4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r26));
/*80421CA8 0041EAA8*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80421CAC 0041EAAC*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r26));
/*80421CB0 0041EAB0*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r26));
/*80421CB4 0041EAB4*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80421CB8 0041EAB8*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*80421CBC 0041EABC*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x8);
/*80421CC0 0041EAC0*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*80421CC4 0041EAC4*/ PPC::Runtime::ASM::blt(.L_80421CA0);
/*80421CC8 0041EAC8*/ PPC::Runtime::ASM::b(.L_80421CE0);
RUNTIME_PPC_JUMP_LABEL(.L_80421CCC, 0x80421CCC) //this is a jump label
/*80421CCC 0041EACC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*80421CD0 0041EAD0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80421CD4 0041EAD4*/ PPC::Runtime::ASM::beq(.L_80421CE0);
/*80421CD8 0041EAD8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421CDC 0041EADC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80421CE0, 0x80421CE0) //this is a jump label
/*80421CE0 0041EAE0*/ PPC::Runtime::ASM::lwz(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r30));
/*80421CE4 0041EAE4*/ PPC::Runtime::ASM::lbz(context->r27, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r30));
/*80421CE8 0041EAE8*/ PPC::Runtime::ASM::mr(context->r3, context->r26);
/*80421CEC 0041EAEC*/ PPC::Runtime::ASM::bl(fn_HSD_TExpGetType);
/*80421CF0 0041EAF0*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x4);
/*80421CF4 0041EAF4*/ PPC::Runtime::ASM::beq(.L_80421D84);
/*80421CF8 0041EAF8*/ PPC::Runtime::ASM::bge(.L_80421D98);
/*80421CFC 0041EAFC*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*80421D00 0041EB00*/ PPC::Runtime::ASM::beq(.L_80421D08);
/*80421D04 0041EB04*/ PPC::Runtime::ASM::b(.L_80421D98);
RUNTIME_PPC_JUMP_LABEL(.L_80421D08, 0x80421D08) //this is a jump label
/*80421D08 0041EB08*/ PPC::Runtime::ASM::cmplwi(context->r27, 0x1);
/*80421D0C 0041EB0C*/ PPC::Runtime::ASM::bne(.L_80421D28);
/*80421D10 0041EB10*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421D14 0041EB14*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421D18 0041EB18*/ PPC::Runtime::ASM::beq(.L_80421D3C);
/*80421D1C 0041EB1C*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421D20 0041EB20*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421D24 0041EB24*/ PPC::Runtime::ASM::b(.L_80421D3C);
RUNTIME_PPC_JUMP_LABEL(.L_80421D28, 0x80421D28) //this is a jump label
/*80421D28 0041EB28*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80421D2C 0041EB2C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*80421D30 0041EB30*/ PPC::Runtime::ASM::beq(.L_80421D3C);
/*80421D34 0041EB34*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421D38 0041EB38*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80421D3C, 0x80421D3C) //this is a jump label
/*80421D3C 0041EB3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r26));
/*80421D40 0041EB40*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421D44 0041EB44*/ PPC::Runtime::ASM::bne(.L_80421D98);
/*80421D48 0041EB48*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r26));
/*80421D4C 0041EB4C*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*80421D50 0041EB50*/ PPC::Runtime::ASM::bne(.L_80421D98);
/*80421D54 0041EB54*/ PPC::Runtime::ASM::li(context->r27, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_80421D58, 0x80421D58) //this is a jump label
/*80421D58 0041EB58*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r26));
/*80421D5C 0041EB5C*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x25, context->r26));
/*80421D60 0041EB60*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80421D64 0041EB64*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r26));
/*80421D68 0041EB68*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x45, context->r26));
/*80421D6C 0041EB6C*/ PPC::Runtime::ASM::bl(fn_HSD_TExpUnref);
/*80421D70 0041EB70*/ PPC::Runtime::ASM::addi(context->r27, context->r27, 0x1);
/*80421D74 0041EB74*/ PPC::Runtime::ASM::addi(context->r26, context->r26, 0x8);
/*80421D78 0041EB78*/ PPC::Runtime::ASM::cmpwi(context->r27, 0x4);
/*80421D7C 0041EB7C*/ PPC::Runtime::ASM::blt(.L_80421D58);
/*80421D80 0041EB80*/ PPC::Runtime::ASM::b(.L_80421D98);
RUNTIME_PPC_JUMP_LABEL(.L_80421D84, 0x80421D84) //this is a jump label
/*80421D84 0041EB84*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
/*80421D88 0041EB88*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80421D8C 0041EB8C*/ PPC::Runtime::ASM::beq(.L_80421D98);
/*80421D90 0041EB90*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421D94 0041EB94*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r26));
RUNTIME_PPC_JUMP_LABEL(.L_80421D98, 0x80421D98) //this is a jump label
/*80421D98 0041EB98*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x1);
/*80421D9C 0041EB9C*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x8);
/*80421DA0 0041EBA0*/ PPC::Runtime::ASM::cmpwi(context->r31, 0x4);
/*80421DA4 0041EBA4*/ PPC::Runtime::ASM::blt(.L_80421C28);
/*80421DA8 0041EBA8*/ PPC::Runtime::ASM::b(.L_80421DC0);
RUNTIME_PPC_JUMP_LABEL(.L_80421DAC, 0x80421DAC) //this is a jump label
/*80421DAC 0041EBAC*/ PPC::Runtime::ASM::lbz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
/*80421DB0 0041EBB0*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*80421DB4 0041EBB4*/ PPC::Runtime::ASM::beq(.L_80421DC0);
/*80421DB8 0041EBB8*/ PPC::Runtime::ASM::subi(context->r0, context->r3, 0x1);
/*80421DBC 0041EBBC*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r30));
RUNTIME_PPC_JUMP_LABEL(.L_80421DC0, 0x80421DC0) //this is a jump label
/*80421DC0 0041EBC0*/ PPC::Runtime::ASM::addi(context->r28, context->r28, 0x1);
/*80421DC4 0041EBC4*/ PPC::Runtime::ASM::addi(context->r29, context->r29, 0x8);
/*80421DC8 0041EBC8*/ PPC::Runtime::ASM::cmpwi(context->r28, 0x4);
/*80421DCC 0041EBCC*/ PPC::Runtime::ASM::blt(.L_80421940);
/*80421DD0 0041EBD0*/ PPC::Runtime::ASM::b(.L_80421DE8);
RUNTIME_PPC_JUMP_LABEL(.L_80421DD4, 0x80421DD4) //this is a jump label
/*80421DD4 0041EBD4*/ PPC::Runtime::ASM::lbz(context->r4, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
/*80421DD8 0041EBD8*/ PPC::Runtime::ASM::cmplwi(context->r4, 0x0);
/*80421DDC 0041EBDC*/ PPC::Runtime::ASM::beq(.L_80421DE8);
/*80421DE0 0041EBE0*/ PPC::Runtime::ASM::subi(context->r0, context->r4, 0x1);
/*80421DE4 0041EBE4*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x10, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_80421DE8, 0x80421DE8) //this is a jump label
/*80421DE8 0041EBE8*/ PPC::Runtime::ASM::addi(context->r11, context->r1, 0x20);
/*80421DEC 0041EBEC*/ PPC::Runtime::ASM::bl(_restgpr_26);
/*80421DF0 0041EBF0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*80421DF4 0041EBF4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80421DF8 0041EBF8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*80421DFC 0041EBFC*/ PPC::Runtime::ASM::blr();
}