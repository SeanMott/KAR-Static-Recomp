//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80131928.hpp"
#include "fn_80177FFC.hpp"
#include "fn_8017820C.hpp"
#include "fn_80178AB0.hpp"
#include "fn_80178F48.hpp"
#include "fn_80179324.hpp"
#include "fn_801798B0.hpp"
#include "fn_8017A014.hpp"
#include "fn_8017A798.hpp"
#include "fn_8017AC4C.hpp"
#include "fn_8017B388.hpp"
#include "fn_8013B6F0.hpp"
#include "fn_80161C08.hpp"



void fn_80133520(PPC::Runtime::GCContext* context)
{
/*80133520 00130320*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80133524 00130324*/ PPC::Runtime::ASM::mflr(context->r0);
/*80133528 00130328*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*8013352C 0013032C*/ PPC::Runtime::ASM::bl(fn_80131928);
/*80133530 00130330*/ PPC::Runtime::ASM::bl(fn_80177FFC);
/*80133534 00130334*/ PPC::Runtime::ASM::bl(fn_8017820C);
/*80133538 00130338*/ PPC::Runtime::ASM::bl(fn_80178AB0);
/*8013353C 0013033C*/ PPC::Runtime::ASM::bl(fn_80178F48);
/*80133540 00130340*/ PPC::Runtime::ASM::bl(fn_80179324);
/*80133544 00130344*/ PPC::Runtime::ASM::bl(fn_801798B0);
/*80133548 00130348*/ PPC::Runtime::ASM::bl(fn_8017A014);
/*8013354C 0013034C*/ PPC::Runtime::ASM::bl(fn_8017A798);
/*80133550 00130350*/ PPC::Runtime::ASM::bl(fn_8017AC4C);
/*80133554 00130354*/ PPC::Runtime::ASM::bl(fn_8017B388);
/*80133558 00130358*/ PPC::Runtime::ASM::bl(fn_8013B6F0);
/*8013355C 0013035C*/ PPC::Runtime::ASM::bl(fn_80161C08);
/*80133560 00130360*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80133564 00130364*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80133568 00130368*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*8013356C 0013036C*/ PPC::Runtime::ASM::blr();
}