//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_80131928.hpp"
#include "fn_80146EA8.hpp"
#include "fn_80147364.hpp"
#include "fn_8014780C.hpp"
#include "fn_80147C34.hpp"
#include "fn_8014820C.hpp"
#include "fn_80148A04.hpp"
#include "fn_8014932C.hpp"
#include "fn_80149DA8.hpp"
#include "fn_8014A090.hpp"
#include "fn_8014A3F4.hpp"
#include "fn_8014A65C.hpp"
#include "fn_8014A8A8.hpp"
#include "fn_8014AAA8.hpp"
#include "fn_8014ADCC.hpp"
#include "fn_8014B140.hpp"
#include "fn_8014B44C.hpp"
#include "fn_8014B774.hpp"
#include "fn_8014BA28.hpp"
#include "fn_8014BEEC.hpp"
#include "fn_8014BC88.hpp"
#include "fn_8014C240.hpp"
#include "fn_8014C6DC.hpp"
#include "fn_8014CAF8.hpp"
#include "fn_8013B6F0.hpp"
#include "fn_80161C08.hpp"



void fn_80132C58(PPC::Runtime::GCContext* context)
{
/*80132C58 0012FA58*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*80132C5C 0012FA5C*/ PPC::Runtime::ASM::mflr(context->r0);
/*80132C60 0012FA60*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132C64 0012FA64*/ PPC::Runtime::ASM::bl(fn_80131928);
/*80132C68 0012FA68*/ PPC::Runtime::ASM::bl(fn_80146EA8);
/*80132C6C 0012FA6C*/ PPC::Runtime::ASM::bl(fn_80147364);
/*80132C70 0012FA70*/ PPC::Runtime::ASM::bl(fn_8014780C);
/*80132C74 0012FA74*/ PPC::Runtime::ASM::bl(fn_80147C34);
/*80132C78 0012FA78*/ PPC::Runtime::ASM::bl(fn_8014820C);
/*80132C7C 0012FA7C*/ PPC::Runtime::ASM::bl(fn_80148A04);
/*80132C80 0012FA80*/ PPC::Runtime::ASM::bl(fn_8014932C);
/*80132C84 0012FA84*/ PPC::Runtime::ASM::bl(fn_80149DA8);
/*80132C88 0012FA88*/ PPC::Runtime::ASM::bl(fn_8014A090);
/*80132C8C 0012FA8C*/ PPC::Runtime::ASM::bl(fn_8014A3F4);
/*80132C90 0012FA90*/ PPC::Runtime::ASM::bl(fn_8014A65C);
/*80132C94 0012FA94*/ PPC::Runtime::ASM::bl(fn_8014A8A8);
/*80132C98 0012FA98*/ PPC::Runtime::ASM::bl(fn_8014AAA8);
/*80132C9C 0012FA9C*/ PPC::Runtime::ASM::bl(fn_8014ADCC);
/*80132CA0 0012FAA0*/ PPC::Runtime::ASM::bl(fn_8014B140);
/*80132CA4 0012FAA4*/ PPC::Runtime::ASM::bl(fn_8014B44C);
/*80132CA8 0012FAA8*/ PPC::Runtime::ASM::bl(fn_8014B774);
/*80132CAC 0012FAAC*/ PPC::Runtime::ASM::bl(fn_8014BA28);
/*80132CB0 0012FAB0*/ PPC::Runtime::ASM::bl(fn_8014BEEC);
/*80132CB4 0012FAB4*/ PPC::Runtime::ASM::bl(fn_8014BC88);
/*80132CB8 0012FAB8*/ PPC::Runtime::ASM::bl(fn_8014C240);
/*80132CBC 0012FABC*/ PPC::Runtime::ASM::bl(fn_8014C6DC);
/*80132CC0 0012FAC0*/ PPC::Runtime::ASM::bl(fn_8014CAF8);
/*80132CC4 0012FAC4*/ PPC::Runtime::ASM::bl(fn_8013B6F0);
/*80132CC8 0012FAC8*/ PPC::Runtime::ASM::bl(fn_80161C08);
/*80132CCC 0012FACC*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*80132CD0 0012FAD0*/ PPC::Runtime::ASM::mtlr(context->r0);
/*80132CD4 0012FAD4*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*80132CD8 0012FAD8*/ PPC::Runtime::ASM::blr();
}