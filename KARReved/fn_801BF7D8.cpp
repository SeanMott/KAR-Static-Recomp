//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8019FF04.hpp"
#include "fn_801C0764.hpp"
#include "fn_801BF448.hpp"
#include "fn_80194144.hpp"
#include "fn_801BF85C.hpp"



void fn_801BF7D8(PPC::Runtime::GCContext* context)
{
/*801BF7D8 001BC5D8*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801BF7DC 001BC5DC*/ PPC::Runtime::ASM::mflr(context->r0);
/*801BF7E0 001BC5E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF7E4 001BC5E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF7E8 001BC5E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801BF7EC 001BC5EC*/ PPC::Runtime::ASM::bl(fn_8019FF04);
/*801BF7F0 001BC5F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF7F4 001BC5F4*/ PPC::Runtime::ASM::bl(fn_801C0764);
/*801BF7F8 001BC5F8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BF7FC 001BC5FC*/ PPC::Runtime::ASM::bne(.L_801BF828);
/*801BF800 001BC600*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF804 001BC604*/ PPC::Runtime::ASM::bl(fn_801BF448);
/*801BF808 001BC608*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BF80C 001BC60C*/ PPC::Runtime::ASM::bne(.L_801BF828);
/*801BF810 001BC610*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF814 001BC614*/ PPC::Runtime::ASM::bl(fn_80194144);
/*801BF818 001BC618*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801BF81C 001BC61C*/ PPC::Runtime::ASM::bne(.L_801BF828);
/*801BF820 001BC620*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801BF824 001BC624*/ PPC::Runtime::ASM::bl(fn_801BF85C);
RUNTIME_PPC_JUMP_LABEL(.L_801BF828, 0x801BF828) //this is a jump label
/*801BF828 001BC628*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801BF82C 001BC62C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801BF830 001BC630*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801BF834 001BC634*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801BF838 001BC638*/ PPC::Runtime::ASM::blr();
}