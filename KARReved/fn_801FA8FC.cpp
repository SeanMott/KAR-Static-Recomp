//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_chargeLogic?.hpp"
#include "fn_801CA294.hpp"
#include "fn_801E3B80.hpp"



void fn_801FA8FC(PPC::Runtime::GCContext* context)
{
/*801FA8FC 001F76FC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*801FA900 001F7700*/ PPC::Runtime::ASM::mflr(context->r0);
/*801FA904 001F7704*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E21D4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FA908 001F7708*/ PPC::Runtime::ASM::li(context->r4, 0x15);
/*801FA90C 001F770C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA910 001F7710*/ PPC::Runtime::ASM::li(context->r5, -0x1);
/*801FA914 001F7714*/ PPC::Runtime::ASM::lfs(context->f2, STRUCT_FLOAT_COUNT_1805E21D8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*801FA918 001F7718*/ PPC::Runtime::ASM::li(context->r6, 0x0);
/*801FA91C 001F771C*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FA920 001F7720*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*801FA924 001F7724*/ PPC::Runtime::ASM::bl(fn_chargeLogic?);
/*801FA928 001F7728*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801FA92C 001F772C*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*801FA930 001F7730*/ PPC::Runtime::ASM::rlwimi(context->r0, context->r3, 0, 31, 31);
/*801FA934 001F7734*/ PPC::Runtime::ASM::stb(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc32, context->r31));
/*801FA938 001F7738*/ PPC::Runtime::ASM::lbz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc35, context->r31));
/* 801FA93C 001F773C  54 00 07 FF */ clrlwi. context->r0 , context->r0 , 31
/*801FA940 001F7740*/ PPC::Runtime::ASM::bne(.L_801FA94C);
/*801FA944 001F7744*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FA948 001F7748*/ PPC::Runtime::ASM::bl(fn_801CA294);
RUNTIME_PPC_JUMP_LABEL(.L_801FA94C, 0x801FA94C) //this is a jump label
/*801FA94C 001F774C*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*801FA950 001F7750*/ PPC::Runtime::ASM::li(context->r4, 0x1);
/*801FA954 001F7754*/ PPC::Runtime::ASM::bl(fn_801E3B80);
/*801FA958 001F7758*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*801FA95C 001F775C*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*801FA960 001F7760*/ PPC::Runtime::ASM::mtlr(context->r0);
/*801FA964 001F7764*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*801FA968 001F7768*/ PPC::Runtime::ASM::blr();
}