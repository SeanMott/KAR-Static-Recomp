//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_801A423C.hpp"
#include "fn_Rider_CheckAnimationEnd.hpp"
#include "fn_isRuleDestructionDerby.hpp"
#include "fn_801A1D70.hpp"
#include "fn_801BD8D8.hpp"
#include "fn_801A561C.hpp"
#include "fn_801A5020.hpp"



void fn_801A53D4(PPC::Runtime::GCContext* context)
{
/*801A53D4 001A21D4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801A53D8 001A21D8*/ PPC::Runtime::ASM::mflr(context->r0);
/*801A53DC 001A21DC*/ PPC::Runtime::ASM::li(context->r4, 0x0);
/*801A53E0 001A21E0*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A53E4 001A21E4*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A53E8 001A21E8*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801A53EC 001A21EC*/ PPC::Runtime::ASM::bl(fn_801A423C);
/*801A53F0 001A21F0*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A53F4 001A21F4*/ PPC::Runtime::ASM::bl(fn_Rider_CheckAnimationEnd);
/*801A53F8 001A21F8*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A53FC 001A21FC*/ PPC::Runtime::ASM::beq(.L_801A5470);
/*801A5400 001A2200*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x826, context->r31));
/* 801A5404 001A2204  54 00 FF FF */ extrwi. context->r0 , context->r0 , 1 , 30
/*801A5408 001A2208*/ PPC::Runtime::ASM::bne(.L_801A5424);
/*801A540C 001A220C*/ PPC::Runtime::ASM::bl(fn_isRuleDestructionDerby);
/*801A5410 001A2210*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A5414 001A2214*/ PPC::Runtime::ASM::beq(.L_801A5424);
/*801A5418 001A2218*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A541C 001A221C*/ PPC::Runtime::ASM::bl(fn_801A1D70);
/*801A5420 001A2220*/ PPC::Runtime::ASM::b(.L_801A5470);
RUNTIME_PPC_JUMP_LABEL(.L_801A5424, 0x801A5424) //this is a jump label
/*801A5424 001A2224*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa38, context->r31));
/*801A5428 001A2228*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E12F8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801A542C 001A222C*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*801A5430 001A2230*/ PPC::Runtime::ASM::bne(.L_801A5440);
/*801A5434 001A2234*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xa3c, context->r31));
/*801A5438 001A2238*/ PPC::Runtime::ASM::fcmpu(cr0, context->f0, context->f1);
/*801A543C 001A223C*/ PPC::Runtime::ASM::beq(.L_801A5450);
RUNTIME_PPC_JUMP_LABEL(.L_801A5440, 0x801A5440) //this is a jump label
/*801A5440 001A2240*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A5444 001A2244*/ PPC::Runtime::ASM::bl(fn_801BD8D8);
/*801A5448 001A2248*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A544C 001A224C*/ PPC::Runtime::ASM::bne(.L_801A5470);
RUNTIME_PPC_JUMP_LABEL(.L_801A5450, 0x801A5450) //this is a jump label
/*801A5450 001A2250*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A5454 001A2254*/ PPC::Runtime::ASM::bl(fn_801A561C);
/*801A5458 001A2258*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
/*801A545C 001A225C*/ PPC::Runtime::ASM::bne(.L_801A5470);
/*801A5460 001A2260*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801A5464 001A2264*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801A5468 001A2268*/ PPC::Runtime::ASM::bl(fn_801A5020);
/*801A546C 001A226C*/ PPC::Runtime::ASM::cmpwi(context->r3, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_801A5470, 0x801A5470) //this is a jump label
/*801A5470 001A2270*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801A5474 001A2274*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801A5478 001A2278*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801A547C 001A227C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801A5480 001A2280*/ PPC::Runtime::ASM::blr();
}