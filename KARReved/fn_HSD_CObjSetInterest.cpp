//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn___assert.hpp"
#include "fn___assert.hpp"
#include "fn_HSD_WObjSetPosition.hpp"



void fn_HSD_CObjSetInterest(PPC::Runtime::GCContext* context)
{
/*804017D4 003FE5D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*804017D8 003FE5D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*804017DC 003FE5DC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*804017E0 003FE5E0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*804017E4 003FE5E4*/ PPC::Runtime::ASM::mr(context->r31, context->r4);
/*804017E8 003FE5E8*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/* 804017EC 003FE5EC  7C 7E 1B 79 */ mr. context->r30 , context->r3
/*804017F0 003FE5F0*/ PPC::Runtime::ASM::bne(.L_80401804);
/*804017F4 003FE5F4*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_540 @ Get_MemoryOffset_SDA21);
/*804017F8 003FE5F8*/ PPC::Runtime::ASM::li(context->r4, 0x2fd);
/*804017FC 003FE5FC*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_539 @ Get_MemoryOffset_SDA21);
/*80401800 003FE600*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_80401804, 0x80401804) //this is a jump label
/*80401804 003FE604*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x0);
/*80401808 003FE608*/ PPC::Runtime::ASM::bne(.L_8040181C);
/*8040180C 003FE60C*/ PPC::Runtime::ASM::li(context->r3, MemoryOffset_540 @ Get_MemoryOffset_SDA21);
/*80401810 003FE610*/ PPC::Runtime::ASM::li(context->r4, 0x2c1);
/*80401814 003FE614*/ PPC::Runtime::ASM::li(context->r5, MemoryOffset_539 @ Get_MemoryOffset_SDA21);
/*80401818 003FE618*/ PPC::Runtime::ASM::bl(fn___assert);
RUNTIME_PPC_JUMP_LABEL(.L_8040181C, 0x8040181C) //this is a jump label
/*8040181C 003FE61C*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r30));
/*80401820 003FE620*/ PPC::Runtime::ASM::mr(context->r4, context->r31);
/*80401824 003FE624*/ PPC::Runtime::ASM::bl(fn_HSD_WObjSetPosition);
/*80401828 003FE628*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8040182C 003FE62C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*80401830 003FE630*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*80401834 003FE634*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80401838 003FE638*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8040183C 003FE63C*/ PPC::Runtime::ASM::blr();
}