//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "MWTRACE.hpp"
#include "fn_DBQueryData.hpp"
#include "fn_DBRead.hpp"
#include "fn_CircleBufferWriteBytes.hpp"
#include "fn_803C2F20.hpp"
#include "fn_CircleBufferReadBytes.hpp"
#include "MWTRACE.hpp"



void gdev_cc_read(PPC::Runtime::GCContext* context)
{
/*803C30C4 003BFEC4*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x520, context->r1));
/*803C30C8 003BFEC8*/ PPC::Runtime::ASM::mflr(context->r0);
/*803C30CC 003BFECC*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r1));
/*803C30D0 003BFED0*/ PPC::Runtime::ASM::stmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r1));
/*803C30D4 003BFED4*/ PPC::Runtime::ASM::mr(context->r26, context->r3);
/*803C30D8 003BFED8*/ PPC::Runtime::ASM::mr(context->r27, context->r4);
/*803C30DC 003BFEDC*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*803C30E0 003BFEE0*/ PPC::Runtime::ASM::lwz(context->r0, STRUCT_BYTE4_COUNT_1805DDD10 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*803C30E4 003BFEE4*/ PPC::Runtime::ASM::cmpwi(context->r0, 0x0);
/*803C30E8 003BFEE8*/ PPC::Runtime::ASM::bne(.L_803C30F4);
/*803C30EC 003BFEEC*/ PPC::Runtime::ASM::li(context->r3, -0x2711);
/*803C30F0 003BFEF0*/ PPC::Runtime::ASM::b(.L_803C31A4);
RUNTIME_PPC_JUMP_LABEL(.L_803C30F4, 0x803C30F4) //this is a jump label
/*803C30F4 003BFEF4*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_108 @ Get_MemoryOffset_HighBit);
/*803C30F8 003BFEF8*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*803C30FC 003BFEFC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_108 @ Get_MemoryOffset_LowBit);
/*803C3100 003BFF00*/ PPC::Runtime::ASM::mr(context->r6, context->r27);
/*803C3104 003BFF04*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803C3108 003BFF08*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C310C 003BFF0C*/ PPC::Runtime::ASM::bl(MWTRACE);
/*803C3110 003BFF10*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056CB20 @ Get_MemoryOffset_HighBit);
/*803C3114 003BFF14*/ PPC::Runtime::ASM::mr(context->r29, context->r27);
/*803C3118 003BFF18*/ PPC::Runtime::ASM::addi(context->r31, context->r3, lbl_8056CB20 @ Get_MemoryOffset_LowBit);
/*803C311C 003BFF1C*/ PPC::Runtime::ASM::mr(context->r30, context->r27);
/*803C3120 003BFF20*/ PPC::Runtime::ASM::b(.L_803C3158);
RUNTIME_PPC_JUMP_LABEL(.L_803C3124, 0x803C3124) //this is a jump label
/*803C3124 003BFF24*/ PPC::Runtime::ASM::li(context->r28, 0x0);
/*803C3128 003BFF28*/ PPC::Runtime::ASM::bl(fn_DBQueryData);
/* 803C312C 003BFF2C  7C 7B 1B 79 */ mr. context->r27 , context->r3
/*803C3130 003BFF30*/ PPC::Runtime::ASM::beq(.L_803C3158);
/*803C3134 003BFF34*/ PPC::Runtime::ASM::mr(context->r4, context->r30);
/*803C3138 003BFF38*/ PPC::Runtime::ASM::addi(context->r3, context->r1, 0x8);
/*803C313C 003BFF3C*/ PPC::Runtime::ASM::bl(fn_DBRead);
/* 803C3140 003BFF40  7C 7C 1B 79 */ mr. context->r28 , context->r3
/*803C3144 003BFF44*/ PPC::Runtime::ASM::bne(.L_803C3158);
/*803C3148 003BFF48*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C314C 003BFF4C*/ PPC::Runtime::ASM::mr(context->r5, context->r27);
/*803C3150 003BFF50*/ PPC::Runtime::ASM::addi(context->r4, context->r1, 0x8);
/*803C3154 003BFF54*/ PPC::Runtime::ASM::bl(fn_CircleBufferWriteBytes);
RUNTIME_PPC_JUMP_LABEL(.L_803C3158, 0x803C3158) //this is a jump label
/*803C3158 003BFF58*/ PPC::Runtime::ASM::mr(context->r3, context->r31);
/*803C315C 003BFF5C*/ PPC::Runtime::ASM::bl(fn_803C2F20);
/*803C3160 003BFF60*/ PPC::Runtime::ASM::cmplw(context->r3, context->r30);
/*803C3164 003BFF64*/ PPC::Runtime::ASM::blt(.L_803C3124);
/*803C3168 003BFF68*/ PPC::Runtime::ASM::cmplwi(context->r28, 0x0);
/*803C316C 003BFF6C*/ PPC::Runtime::ASM::bne(.L_803C3188);
/*803C3170 003BFF70*/ PPC::Runtime::ASM::lis(context->r3, lbl_8056CB20 @ Get_MemoryOffset_HighBit);
/*803C3174 003BFF74*/ PPC::Runtime::ASM::mr(context->r4, context->r26);
/*803C3178 003BFF78*/ PPC::Runtime::ASM::addi(context->r3, context->r3, lbl_8056CB20 @ Get_MemoryOffset_LowBit);
/*803C317C 003BFF7C*/ PPC::Runtime::ASM::mr(context->r5, context->r29);
/*803C3180 003BFF80*/ PPC::Runtime::ASM::bl(fn_CircleBufferReadBytes);
/*803C3184 003BFF84*/ PPC::Runtime::ASM::b(.L_803C31A0);
RUNTIME_PPC_JUMP_LABEL(.L_803C3188, 0x803C3188) //this is a jump label
/*803C3188 003BFF88*/ PPC::Runtime::ASM::lis(context->r3, MemoryOffset_109 @ Get_MemoryOffset_HighBit);
/*803C318C 003BFF8C*/ PPC::Runtime::ASM::mr(context->r5, context->r28);
/*803C3190 003BFF90*/ PPC::Runtime::ASM::addi(context->r4, context->r3, MemoryOffset_109 @ Get_MemoryOffset_LowBit);
/*803C3194 003BFF94*/ PPC::Runtime::ASM::li(context->r3, 0x8);
/*803C3198 003BFF98*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803C319C 003BFF9C*/ PPC::Runtime::ASM::bl(MWTRACE);
RUNTIME_PPC_JUMP_LABEL(.L_803C31A0, 0x803C31A0) //this is a jump label
/*803C31A0 003BFFA0*/ PPC::Runtime::ASM::mr(context->r3, context->r28);
RUNTIME_PPC_JUMP_LABEL(.L_803C31A4, 0x803C31A4) //this is a jump label
/*803C31A4 003BFFA4*/ PPC::Runtime::ASM::lmw(context->r26, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x508, context->r1));
/*803C31A8 003BFFA8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x524, context->r1));
/*803C31AC 003BFFAC*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803C31B0 003BFFB0*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x520);
/*803C31B4 003BFFB4*/ PPC::Runtime::ASM::blr();
}