//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_IsCard(PPC::Runtime::GCContext* context)
{
/* 803E5BBC 003E29BC  54 60 00 1F */ clrrwi. context->r0 , context->r3 , 16
/*803E5BC0 003E29C0*/ PPC::Runtime::ASM::beq(.L_803E5BE4);
/*803E5BC4 003E29C4*/ PPC::Runtime::ASM::addis(context->r0, context->r3, 0x8000);
/*803E5BC8 003E29C8*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x4);
/*803E5BCC 003E29CC*/ PPC::Runtime::ASM::bne(.L_803E5BDC);
/*803E5BD0 003E29D0*/ PPC::Runtime::ASM::lhz(context->r0, StructValues_Byte2_2 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803E5BD4 003E29D4*/ PPC::Runtime::ASM::cmplwi(context->r0, 0xffff);
/*803E5BD8 003E29D8*/ PPC::Runtime::ASM::bne(.L_803E5BE4);
RUNTIME_PPC_JUMP_LABEL(.L_803E5BDC, 0x803E5BDC) //this is a jump label
/*803E5BDC 003E29DC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E5BE0 003E29E0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803E5BE4, 0x803E5BE4) //this is a jump label
/* 803E5BE4 003E29E4  54 60 07 BF */ clrlwi. context->r0 , context->r3 , 30
/*803E5BE8 003E29E8*/ PPC::Runtime::ASM::beq(.L_803E5BF4);
/*803E5BEC 003E29EC*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E5BF0 003E29F0*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803E5BF4, 0x803E5BF4) //this is a jump label
/*803E5BF4 003E29F4*/ PPC::Runtime::ASM::rlwinm(context->r5, context->r3, 0, 24, 29);
/*803E5BF8 003E29F8*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x20);
/*803E5BFC 003E29FC*/ PPC::Runtime::ASM::beq(.L_803E5C44);
/*803E5C00 003E2A00*/ PPC::Runtime::ASM::bge(.L_803E5C28);
/*803E5C04 003E2A04*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x8);
/*803E5C08 003E2A08*/ PPC::Runtime::ASM::beq(.L_803E5C44);
/*803E5C0C 003E2A0C*/ PPC::Runtime::ASM::bge(.L_803E5C1C);
/*803E5C10 003E2A10*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x4);
/*803E5C14 003E2A14*/ PPC::Runtime::ASM::beq(.L_803E5C44);
/*803E5C18 003E2A18*/ PPC::Runtime::ASM::b(.L_803E5C3C);
RUNTIME_PPC_JUMP_LABEL(.L_803E5C1C, 0x803E5C1C) //this is a jump label
/*803E5C1C 003E2A1C*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x10);
/*803E5C20 003E2A20*/ PPC::Runtime::ASM::beq(.L_803E5C44);
/*803E5C24 003E2A24*/ PPC::Runtime::ASM::b(.L_803E5C3C);
RUNTIME_PPC_JUMP_LABEL(.L_803E5C28, 0x803E5C28) //this is a jump label
/*803E5C28 003E2A28*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x80);
/*803E5C2C 003E2A2C*/ PPC::Runtime::ASM::beq(.L_803E5C44);
/*803E5C30 003E2A30*/ PPC::Runtime::ASM::bge(.L_803E5C3C);
/*803E5C34 003E2A34*/ PPC::Runtime::ASM::cmpwi(context->r5, 0x40);
/*803E5C38 003E2A38*/ PPC::Runtime::ASM::beq(.L_803E5C44);
RUNTIME_PPC_JUMP_LABEL(.L_803E5C3C, 0x803E5C3C) //this is a jump label
/*803E5C3C 003E2A3C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E5C40 003E2A40*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803E5C44, 0x803E5C44) //this is a jump label
/*803E5C44 003E2A44*/ PPC::Runtime::ASM::lis(context->r4, lbl_804FCBA0 @ Get_MemoryOffset_HighBit);
/*803E5C48 003E2A48*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r3, 23, 27, 29);
/*803E5C4C 003E2A4C*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804FCBA0 @ Get_MemoryOffset_LowBit);
/*803E5C50 003E2A50*/ PPC::Runtime::ASM::add(context->r3, context->r0, context->r3);
/*803E5C54 003E2A54*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803E5C58 003E2A58*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*803E5C5C 003E2A5C*/ PPC::Runtime::ASM::bne(.L_803E5C68);
/*803E5C60 003E2A60*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E5C64 003E2A64*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803E5C68, 0x803E5C68) //this is a jump label
/*803E5C68 003E2A68*/ PPC::Runtime::ASM::clrlslwi(context->r0, context->r5, 20, 17);
/*803E5C6C 003E2A6C*/ PPC::Runtime::ASM::divwu(context->r0, context->r0, context->r3);
/*803E5C70 003E2A70*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x8);
/*803E5C74 003E2A74*/ PPC::Runtime::ASM::bge(.L_803E5C80);
/*803E5C78 003E2A78*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*803E5C7C 003E2A7C*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_803E5C80, 0x803E5C80) //this is a jump label
/*803E5C80 003E2A80*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803E5C84 003E2A84*/ PPC::Runtime::ASM::blr();
}