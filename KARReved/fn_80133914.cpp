//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8014DE38.hpp"
#include "fn_8014DF78.hpp"
#include "fn_8014E1E8.hpp"
#include "fn_8014E438.hpp"
#include "fn_8014EC5C.hpp"
#include "fn_8014EF08.hpp"



void fn_80133914(PPC::Runtime::GCContext* context)
{
/*80133914 00130714*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80133918 00130718*/ PPC::Runtime::ASM::mflr(context->r0);
/*8013391C 0013071C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133920 00130720*/ PPC::Runtime::ASM::bl(fn_8014DE38);
/*80133924 00130724*/ PPC::Runtime::ASM::bl(fn_8014DF78);
/*80133928 00130728*/ PPC::Runtime::ASM::bl(fn_8014E1E8);
/*8013392C 0013072C*/ PPC::Runtime::ASM::bl(fn_8014E438);
/*80133930 00130730*/ PPC::Runtime::ASM::bl(fn_8014EC5C);
/*80133934 00130734*/ PPC::Runtime::ASM::bl(fn_8014EF08);
/*80133938 00130738*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013393C 0013073C*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133940 00130740*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80133944 00130744*/ PPC::Runtime::ASM::blr();
}