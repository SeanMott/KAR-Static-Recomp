//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_8018CF64.hpp"
#include "fn_800F85A0.hpp"
#include "fn_800F85FC.hpp"
#include "fn_800F8658.hpp"
#include "fn_8018D878.hpp"
#include "fn_800F86B4.hpp"



void fn_800F53FC(PPC::Runtime::GCContext* context)
{
/*800F53FC 000F21FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*800F5400 000F2200*/ PPC::Runtime::ASM::mflr(context->r0);
/*800F5404 000F2204*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5408 000F2208*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F540C 000F220C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r3));
/*800F5410 000F2210*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800F5414 000F2214*/ PPC::Runtime::ASM::bl(fn_8018CF64);
/*800F5418 000F2218*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F541C 000F221C*/ PPC::Runtime::ASM::bl(fn_800F85A0);
/*800F5420 000F2220*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F5424 000F2224*/ PPC::Runtime::ASM::bl(fn_800F85FC);
/*800F5428 000F2228*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F542C 000F222C*/ PPC::Runtime::ASM::bl(fn_800F8658);
/*800F5430 000F2230*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xec, context->r31));
/*800F5434 000F2234*/ PPC::Runtime::ASM::bl(fn_8018D878);
/*800F5438 000F2238*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*800F543C 000F223C*/ PPC::Runtime::ASM::bl(fn_800F86B4);
/*800F5440 000F2240*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*800F5444 000F2244*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*800F5448 000F2248*/ PPC::Runtime::ASM::mtlr(context->r0);
/*800F544C 000F224C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*800F5450 000F2250*/ PPC::Runtime::ASM::blr();
}