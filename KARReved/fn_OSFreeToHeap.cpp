//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_DLInsert.hpp"



void fn_OSFreeToHeap(PPC::Runtime::GCContext* context)
{
/*803D3708 003D0508*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D370C 003D050C*/ PPC::Runtime::ASM::subi(context->r6, context->r4, 0x20);
/*803D3710 003D0510*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D3714 003D0514*/ PPC::Runtime::ASM::mulli(context->r0, context->r3, 0xc);
/*803D3718 003D0518*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x18, context->r1));
/*803D371C 003D051C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D3720 003D0520*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDEB0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803D3724 003D0524*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r6));
/*803D3728 003D0528*/ PPC::Runtime::ASM::add(context->r31, context->r4, context->r0);
/*803D372C 003D052C*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D3730 003D0530*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803D3734 003D0534*/ PPC::Runtime::ASM::mr(context->r4, context->r6);
/*803D3738 003D0538*/ PPC::Runtime::ASM::beq(.L_803D3744);
/*803D373C 003D053C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803D3740 003D0540*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D3744, 0x803D3744) //this is a jump label
/*803D3744 003D0544*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803D3748 003D0548*/ PPC::Runtime::ASM::cmplwi(context->r3, 0x0);
/*803D374C 003D054C*/ PPC::Runtime::ASM::bne(.L_803D3758);
/*803D3750 003D0550*/ PPC::Runtime::ASM::lwz(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803D3754 003D0554*/ PPC::Runtime::ASM::b(.L_803D3760);
RUNTIME_PPC_JUMP_LABEL(.L_803D3758, 0x803D3758) //this is a jump label
/*803D3758 003D0558*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r4));
/*803D375C 003D055C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r3));
RUNTIME_PPC_JUMP_LABEL(.L_803D3760, 0x803D3760) //this is a jump label
/*803D3760 003D0560*/ PPC::Runtime::ASM::stw(context->r5, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r31));
/*803D3764 003D0564*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803D3768 003D0568*/ PPC::Runtime::ASM::bl(fn_DLInsert);
/*803D376C 003D056C*/ PPC::Runtime::ASM::stw(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*803D3770 003D0570*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803D3774 003D0574*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D3778 003D0578*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x18);
/*803D377C 003D057C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D3780 003D0580*/ PPC::Runtime::ASM::blr();
}