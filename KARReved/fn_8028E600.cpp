//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8028E680.hpp"



void fn_8028E600(PPC::Runtime::GCContext* context)
{
/*8028E600 0028B400*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*8028E604 0028B404*/ PPC::Runtime::ASM::mflr(context->r0);
/*8028E608 0028B408*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028E60C 0028B40C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028E610 0028B410*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*8028E614 0028B414*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 8028E618 0028B418  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*8028E61C 0028B41C*/ PPC::Runtime::ASM::beq(.L_8028E664);
/*8028E620 0028B420*/ PPC::Runtime::ASM::lis(context->r4, lbl_804BD560 @ Get_MemoryOffset_HighBit);
/*8028E624 0028B424*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x4);
/*8028E628 0028B428*/ PPC::Runtime::ASM::addi(context->r0, context->r4, lbl_804BD560 @ Get_MemoryOffset_LowBit);
/*8028E62C 0028B42C*/ PPC::Runtime::ASM::li(context->r4, -0x1);
/*8028E630 0028B430*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028E634 0028B434*/ PPC::Runtime::ASM::bl(fn_8028E680);
/*8028E638 0028B438*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*8028E63C 0028B43C*/ PPC::Runtime::ASM::beq(.L_8028E654);
/*8028E640 0028B440*/ PPC::Runtime::ASM::lis(context->r3, lbl_804BD548 @ Get_MemoryOffset_HighBit);
/*8028E644 0028B444*/ PPC::Runtime::ASM::li(context->r0, 0x0);
/*8028E648 0028B448*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_804BD548 @ Get_MemoryOffset_LowBit);
/*8028E64C 0028B44C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r30));
/*8028E650 0028B450*/ PPC::Runtime::ASM::stw(context->r0, STRUCT_BYTE4_COUNT_1805DDB60 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_8028E654, 0x8028E654) //this is a jump label
/*8028E654 0028B454*/ PPC::Runtime::ASM::extsh.(context->r0, context->r31);
/*8028E658 0028B458*/ PPC::Runtime::ASM::ble(.L_8028E664);
/*8028E65C 0028B45C*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028E660 0028B460*/ PPC::Runtime::ASM::bl(fn_8038CB78);
RUNTIME_PPC_JUMP_LABEL(.L_8028E664, 0x8028E664) //this is a jump label
/*8028E664 0028B464*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8028E668 0028B468*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*8028E66C 0028B46C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*8028E670 0028B470*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*8028E674 0028B474*/ PPC::Runtime::ASM::mtlr(context->r0);
/*8028E678 0028B478*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8028E67C 0028B47C*/ PPC::Runtime::ASM::blr();
}