//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80078BEC.hpp"
#include "fn_8007863C.hpp"



void fn_800AF94C(PPC::Runtime::GCContext* context)
{
/*800AF94C 000AC74C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*800AF950 000AC750*/ PPC::Runtime::ASM::mflr(context->r0);
/*800AF954 000AC754*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x1);
/*800AF958 000AC758*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_750 @ Get_MemoryOffset_HighBit);
/*800AF95C 000AC75C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800AF960 000AC760*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800AF964 000AC764*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800AF968 000AC768*/ PPC::Runtime::ASM::addi(context->r30, context->r3, MemoryOffset_750 @ Get_MemoryOffset_LowBit);
/*800AF96C 000AC76C*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF970 000AC770*/ PPC::Runtime::ASM::bne(.L_800AF9E0);
/*800AF974 000AC774*/ PPC::Runtime::ASM::bl(fn_80078BEC);
/*800AF978 000AC778*/ PPC::Runtime::ASM::li(context->r29, 0x708);
RUNTIME_PPC_JUMP_LABEL(.L_800AF97C, 0x800AF97C) //this is a jump label
/*800AF97C 000AC77C*/ PPC::Runtime::ASM::bl(fn_8007863C);
/*800AF980 000AC780*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*800AF984 000AC784*/ PPC::Runtime::ASM::cmpwi(context->r31, 0xb);
/*800AF988 000AC788*/ PPC::Runtime::ASM::bne(.L_800AF994);
/*800AF98C 000AC78C*/ PPC::Runtime::ASM::bl(fn_8045BB60);
/*800AF990 000AC790*/ PPC::Runtime::ASM::b(.L_800AF9BC);
RUNTIME_PPC_JUMP_LABEL(.L_800AF994, 0x800AF994) //this is a jump label
/*800AF994 000AC794*/ PPC::Runtime::ASM::li(context->r3, lbl_805D5FC8 @ Get_MemoryOffset_SDA21);
/*800AF998 000AC798*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800AF99C 000AC79C*/ PPC::Runtime::ASM::bl(OSReport);
/*800AF9A0 000AC7A0*/ PPC::Runtime::ASM::slwi(context->r0, context->r31, 2);
/*800AF9A4 000AC7A4*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x2e8);
/*800AF9A8 000AC7A8*/ PPC::Runtime::ASM::lwzx(context->r4, context->r3, context->r0);
/*800AF9AC 000AC7AC*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x354);
/*800AF9B0 000AC7B0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800AF9B4 000AC7B4*/ PPC::Runtime::ASM::bl(OSReport);
/*800AF9B8 000AC7B8*/ PPC::Runtime::ASM::b(.L_800AF9E0);
RUNTIME_PPC_JUMP_LABEL(.L_800AF9BC, 0x800AF9BC) //this is a jump label
/*800AF9BC 000AC7BC*/ PPC::Runtime::ASM::cmpwi(context->r29, 0x0);
/*800AF9C0 000AC7C0*/ PPC::Runtime::ASM::subi(context->r29, context->r29, 0x1);
/*800AF9C4 000AC7C4*/ PPC::Runtime::ASM::bge(.L_800AF9D8);
/*800AF9C8 000AC7C8*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x370);
/*800AF9CC 000AC7CC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*800AF9D0 000AC7D0*/ PPC::Runtime::ASM::bl(OSReport);
/*800AF9D4 000AC7D4*/ PPC::Runtime::ASM::b(.L_800AF9E0);
RUNTIME_PPC_JUMP_LABEL(.L_800AF9D8, 0x800AF9D8) //this is a jump label
/*800AF9D8 000AC7D8*/ PPC::Runtime::ASM::bl(fn_VIWaitForRetrace);
/*800AF9DC 000AC7DC*/ PPC::Runtime::ASM::b(.L_800AF97C);
RUNTIME_PPC_JUMP_LABEL(.L_800AF9E0, 0x800AF9E0) //this is a jump label
/*800AF9E0 000AC7E0*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*800AF9E4 000AC7E4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*800AF9E8 000AC7E8*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*800AF9EC 000AC7EC*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*800AF9F0 000AC7F0*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800AF9F4 000AC7F4*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800AF9F8 000AC7F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*800AF9FC 000AC7FC*/ PPC::Runtime::ASM::blr();
}