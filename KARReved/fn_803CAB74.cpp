//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_803CA9C0.hpp"
#include "fn_803CA9C0.hpp"



void fn_803CAB74(PPC::Runtime::GCContext* context)
{
/*803CAB74 003C7974*/ PPC::Runtime::ASM::mflr(context->r0);
/*803CAB78 003C7978*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803CAB7C 003C797C*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x20, context->r1));
/*803CAB80 003C7980*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803CAB84 003C7984*/ PPC::Runtime::ASM::li(context->r31, 0x0);
/*803CAB88 003C7988*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803CAB8C 003C798C*/ PPC::Runtime::ASM::li(context->r30, 0x0);
/*803CAB90 003C7990*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803CAB94 003C7994*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803CAB98, 0x803CAB98) //this is a jump label
/*803CAB98 003C7998*/ PPC::Runtime::ASM::add(context->r4, context->r29, context->r31);
/*803CAB9C 003C799C*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r4));
/*803CABA0 003C79A0*/ PPC::Runtime::ASM::addi(context->r3, context->r30, 0x0);
/*803CABA4 003C79A4*/ PPC::Runtime::ASM::addi(context->r4, context->r4, 0x4);
/*803CABA8 003C79A8*/ PPC::Runtime::ASM::bl(fn_803CA9C0);
/*803CABAC 003C79AC*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*803CABB0 003C79B0*/ PPC::Runtime::ASM::cmpwi(context->r30, 0x14);
/*803CABB4 003C79B4*/ PPC::Runtime::ASM::addi(context->r31, context->r31, 0x8);
/*803CABB8 003C79B8*/ PPC::Runtime::ASM::ble(.L_803CAB98);
/*803CABBC 003C79BC*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 3);
/*803CABC0 003C79C0*/ PPC::Runtime::ASM::add(context->r3, context->r29, context->r0);
/*803CABC4 003C79C4*/ PPC::Runtime::ASM::li(context->r0, 0x19);
/*803CABC8 003C79C8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x0, context->r3));
/*803CABCC 003C79CC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, 0x4);
/*803CABD0 003C79D0*/ PPC::Runtime::ASM::li(context->r3, 0x19);
/*803CABD4 003C79D4*/ PPC::Runtime::ASM::bl(fn_803CA9C0);
/*803CABD8 003C79D8*/ PPC::Runtime::ASM::addi(context->r30, context->r30, 0x1);
/*803CABDC 003C79DC*/ PPC::Runtime::ASM::slwi(context->r0, context->r30, 3);
/*803CABE0 003C79E0*/ PPC::Runtime::ASM::li(context->r3, 0xff);
/*803CABE4 003C79E4*/ PPC::Runtime::ASM::stwx(context->r3, context->r29, context->r0);
/*803CABE8 003C79E8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803CABEC 003C79EC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803CABF0 003C79F0*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x18, context->r1));
/*803CABF4 003C79F4*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803CABF8 003C79F8*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x20);
/*803CABFC 003C79FC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803CAC00 003C7A00*/ PPC::Runtime::ASM::blr();
}