//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following



void fn_802041C8(PPC::Runtime::GCContext* context)
{
/*802041C8 00200FC8*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*802041CC 00200FCC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r3));
/*802041D0 00200FD0*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x26);
/*802041D4 00200FD4*/ PPC::Runtime::ASM::beq(.L_802041F4);
/*802041D8 00200FD8*/ PPC::Runtime::ASM::bge(.L_802041E8);
/*802041DC 00200FDC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0xe);
/*802041E0 00200FE0*/ PPC::Runtime::ASM::beq(.L_802041F4);
/*802041E4 00200FE4*/ PPC::Runtime::ASM::b(.L_802041FC);
RUNTIME_PPC_JUMP_LABEL(.L_802041E8, 0x802041E8) //this is a jump label
/*802041E8 00200FE8*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x3e);
/*802041EC 00200FEC*/ PPC::Runtime::ASM::beq(.L_802041F4);
/*802041F0 00200FF0*/ PPC::Runtime::ASM::b(.L_802041FC);
RUNTIME_PPC_JUMP_LABEL(.L_802041F4, 0x802041F4) //this is a jump label
/*802041F4 00200FF4*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*802041F8 00200FF8*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_802041FC, 0x802041FC) //this is a jump label
/*802041FC 00200FFC*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x48);
/*80204200 00201000*/ PPC::Runtime::ASM::bge(.L_8020422C);
/*80204204 00201004*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r3));
/*80204208 00201008*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*8020420C 0020100C*/ PPC::Runtime::ASM::bne(.L_8020421C);
/*80204210 00201010*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xb08, context->r3));
/* 80204214 00201014  54 00 E7 FF */ extrwi. context->r0 , context->r0 , 1 , 27
/*80204218 00201018*/ PPC::Runtime::ASM::beq(.L_80204224);
RUNTIME_PPC_JUMP_LABEL(.L_8020421C, 0x8020421C) //this is a jump label
/*8020421C 0020101C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80204220 00201020*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_80204224, 0x80204224) //this is a jump label
/*80204224 00201024*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*80204228 00201028*/ PPC::Runtime::ASM::blr();
RUNTIME_PPC_JUMP_LABEL(.L_8020422C, 0x8020422C) //this is a jump label
/*8020422C 0020102C*/ PPC::Runtime::ASM::li(context->r3, 0x0);
/*80204230 00201030*/ PPC::Runtime::ASM::blr();
}