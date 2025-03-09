//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "OSDisableInterrupts.hpp"
#include "SIGetType.hpp"
#include "fn_SISetCommand.hpp"
#include "fn_SITransferCommands.hpp"
#include "OSRestoreInterrupts.hpp"



void fn_PADControlMotor(PPC::Runtime::GCContext* context)
{
/*803DCCB4 003D9AB4*/ PPC::Runtime::ASM::mflr(context->r0);
/*803DCCB8 003D9AB8*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803DCCBC 003D9ABC*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x28, context->r1));
/*803DCCC0 003D9AC0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803DCCC4 003D9AC4*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803DCCC8 003D9AC8*/ PPC::Runtime::ASM::addi(context->r30, context->r4, 0x0);
/*803DCCCC 003D9ACC*/ PPC::Runtime::ASM::stw(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DCCD0 003D9AD0*/ PPC::Runtime::ASM::addi(context->r29, context->r3, 0x0);
/*803DCCD4 003D9AD4*/ PPC::Runtime::ASM::bl(OSDisableInterrupts);
/*803DCCD8 003D9AD8*/ PPC::Runtime::ASM::lis(context->r0, 0x8000);
/*803DCCDC 003D9ADC*/ PPC::Runtime::ASM::lwz(context->r4, STRUCT_BYTE4_COUNT_1805DDF44 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DCCE0 003D9AE0*/ PPC::Runtime::ASM::srw(context->r0, context->r0, context->r29);
/*803DCCE4 003D9AE4*/ PPC::Runtime::ASM::and.(context->r0, context->r4, context->r0);
/*803DCCE8 003D9AE8*/ PPC::Runtime::ASM::addi(context->r31, context->r3, 0x0);
/*803DCCEC 003D9AEC*/ PPC::Runtime::ASM::beq(.L_803DCD34);
/*803DCCF0 003D9AF0*/ PPC::Runtime::ASM::mr(context->r3, context->r29);
/*803DCCF4 003D9AF4*/ PPC::Runtime::ASM::bl(SIGetType);
/*803DCCF8 003D9AF8*/ PPC::Runtime::ASM::rlwinm.(context->r0, context->r3, 0, 2, 2);
/*803DCCFC 003D9AFC*/ PPC::Runtime::ASM::bne(.L_803DCD34);
/*803DCD00 003D9B00*/ PPC::Runtime::ASM::lwz(context->r0, StructValues_30 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DCD04 003D9B04*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x2);
/*803DCD08 003D9B08*/ PPC::Runtime::ASM::bge(.L_803DCD18);
/*803DCD0C 003D9B0C*/ PPC::Runtime::ASM::cmplwi(context->r30, 0x2);
/*803DCD10 003D9B10*/ PPC::Runtime::ASM::bne(.L_803DCD18);
/*803DCD14 003D9B14*/ PPC::Runtime::ASM::li(context->r30, 0x0);
RUNTIME_PPC_JUMP_LABEL(.L_803DCD18, 0x803DCD18) //this is a jump label
/*803DCD18 003D9B18*/ PPC::Runtime::ASM::lwz(context->r4, StructValues_31 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803DCD1C 003D9B1C*/ PPC::Runtime::ASM::clrlwi(context->r0, context->r30, 30);
/*803DCD20 003D9B20*/ PPC::Runtime::ASM::addi(context->r3, context->r29, 0x0);
/*803DCD24 003D9B24*/ PPC::Runtime::ASM::oris(context->r4, context->r4, 0x40);
/*803DCD28 003D9B28*/ PPC::Runtime::ASM::or(context->r4, context->r4, context->r0);
/*803DCD2C 003D9B2C*/ PPC::Runtime::ASM::bl(fn_SISetCommand);
/*803DCD30 003D9B30*/ PPC::Runtime::ASM::bl(fn_SITransferCommands);
RUNTIME_PPC_JUMP_LABEL(.L_803DCD34, 0x803DCD34) //this is a jump label
/*803DCD34 003D9B34*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803DCD38 003D9B38*/ PPC::Runtime::ASM::bl(OSRestoreInterrupts);
/*803DCD3C 003D9B3C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2c, context->r1));
/*803DCD40 003D9B40*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r1));
/*803DCD44 003D9B44*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*803DCD48 003D9B48*/ PPC::Runtime::ASM::lwz(context->r29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*803DCD4C 003D9B4C*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x28);
/*803DCD50 003D9B50*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803DCD54 003D9B54*/ PPC::Runtime::ASM::blr();
}