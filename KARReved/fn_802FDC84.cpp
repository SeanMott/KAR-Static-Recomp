//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "fn_802DE0E4.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_80296264.hpp"
#include "fn_8029626C.hpp"
#include "fn_802D4C30.hpp"
#include "fn_802DE0E4.hpp"



void fn_802FDC84(PPC::Runtime::GCContext* context)
{
/*802FDC84 002FAA84*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x60, context->r1));
/*802FDC88 002FAA88*/ PPC::Runtime::ASM::mflr(context->r0);
/*802FDC8C 002FAA8C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802FDC90 002FAA90*/ PPC::Runtime::ASM::stfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802FDC94 002FAA94*/ PPC::Runtime::ASM::psq_st(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802FDC98 002FAA98*/ PPC::Runtime::ASM::stfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802FDC9C 002FAA9C*/ PPC::Runtime::ASM::psq_st(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802FDCA0 002FAAA0*/ PPC::Runtime::ASM::stfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802FDCA4 002FAAA4*/ PPC::Runtime::ASM::psq_st(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802FDCA8 002FAAA8*/ PPC::Runtime::ASM::stfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802FDCAC 002FAAAC*/ PPC::Runtime::ASM::psq_st(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802FDCB0 002FAAB0*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FDCB4 002FAAB4*/ PPC::Runtime::ASM::mr(context->r31, context->r3);
/*802FDCB8 002FAAB8*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802FDCBC 002FAABC*/ PPC::Runtime::ASM::lfs(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x211c, context->r3));
/*802FDCC0 002FAAC0*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDCC4 002FAAC4*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802FDCC8 002FAAC8*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802FDCCC 002FAACC*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDCD0 002FAAD0*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802FDCD4 002FAAD4*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802FDCD8 002FAAD8*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDCDC 002FAADC*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*802FDCE0 002FAAE0*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*802FDCE4 002FAAE4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDCE8 002FAAE8*/ PPC::Runtime::ASM::fmuls(context->f29, context->f1, context->f0);
/*802FDCEC 002FAAEC*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802FDCF0 002FAAF0*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802FDCF4 002FAAF4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDCF8 002FAAF8*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802FDCFC 002FAAFC*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802FDD00 002FAB00*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD04 002FAB04*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*802FDD08 002FAB08*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*802FDD0C 002FAB0C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD10 002FAB10*/ PPC::Runtime::ASM::fmuls(context->f2, context->f30, context->f29);
/*802FDD14 002FAB14*/ PPC::Runtime::ASM::lwz(context->r3, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r31));
/*802FDD18 002FAB18*/ PPC::Runtime::ASM::fmuls(context->f3, context->f1, context->f0);
/*802FDD1C 002FAB1C*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x24, context->r3));
/*802FDD20 002FAB20*/ PPC::Runtime::ASM::fabs(context->f29, context->f0);
/*802FDD24 002FAB24*/ PPC::Runtime::ASM::fdivs(context->f2, context->f2, context->f3);
/*802FDD28 002FAB28*/ PPC::Runtime::ASM::stfs(context->f2, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FDD2C 002FAB2C*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*802FDD30 002FAB30*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FDD34 002FAB34*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802FDD38 002FAB38*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802FDD3C 002FAB3C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD40 002FAB40*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802FDD44 002FAB44*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802FDD48 002FAB48*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD4C 002FAB4C*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*802FDD50 002FAB50*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*802FDD54 002FAB54*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD58 002FAB58*/ PPC::Runtime::ASM::fmuls(context->f30, context->f1, context->f0);
/*802FDD5C 002FAB5C*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802FDD60 002FAB60*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802FDD64 002FAB64*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD68 002FAB68*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802FDD6C 002FAB6C*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802FDD70 002FAB70*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD8 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD74 002FAB74*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*802FDD78 002FAB78*/ PPC::Runtime::ASM::fmuls(context->f0, context->f1, context->f31);
/*802FDD7C 002FAB7C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD80 002FAB80*/ PPC::Runtime::ASM::fmuls(context->f28, context->f1, context->f0);
/*802FDD84 002FAB84*/ PPC::Runtime::ASM::bl(fn_80296264);
/*802FDD88 002FAB88*/ PPC::Runtime::ASM::fmr(context->f31, context->f1);
/*802FDD8C 002FAB8C*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD90 002FAB90*/ PPC::Runtime::ASM::bl(fn_8029626C);
/*802FDD94 002FAB94*/ PPC::Runtime::ASM::fmuls(context->f31, context->f1, context->f31);
/*802FDD98 002FAB98*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AE0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDD9C 002FAB9C*/ PPC::Runtime::ASM::bl(fn_802D4C30);
/*802FDDA0 002FABA0*/ PPC::Runtime::ASM::frsp(context->f2, context->f29);
/*802FDDA4 002FABA4*/ PPC::Runtime::ASM::lfs(context->f3, STRUCT_FLOAT_COUNT_1805E3AD4 @ Get_MemoryOffset_SDA21 ( context->r0 ));
/*802FDDA8 002FABA8*/ PPC::Runtime::ASM::fmuls(context->f4, context->f1, context->f31);
/*802FDDAC 002FABAC*/ PPC::Runtime::ASM::lfs(context->f0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*802FDDB0 002FABB0*/ PPC::Runtime::ASM::fmuls(context->f1, context->f2, context->f30);
/*802FDDB4 002FABB4*/ PPC::Runtime::ASM::fmuls(context->f2, context->f3, context->f4);
/*802FDDB8 002FABB8*/ PPC::Runtime::ASM::fdivs(context->f1, context->f1, context->f28);
/*802FDDBC 002FABBC*/ PPC::Runtime::ASM::fmuls(context->f1, context->f1, context->f2);
/*802FDDC0 002FABC0*/ PPC::Runtime::ASM::fcmpo(cr0, context->f1, context->f0);
/*802FDDC4 002FABC4*/ PPC::Runtime::ASM::ble(.L_802FDDD4);
/*802FDDC8 002FABC8*/ PPC::Runtime::ASM::bl(fn_802DE0E4);
/*802FDDCC 002FABCC*/ PPC::Runtime::ASM::lfs(context->f1, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x2118, context->r3));
/*802FDDD0 002FABD0*/ PPC::Runtime::ASM::b(.L_802FDDD8);
RUNTIME_PPC_JUMP_LABEL(.L_802FDDD4, 0x802FDDD4) //this is a jump label
/*802FDDD4 002FABD4*/ PPC::Runtime::ASM::lfs(context->f1, STRUCT_FLOAT_COUNT_1805E3AD0 @ Get_MemoryOffset_SDA21 ( context->r0 ));
RUNTIME_PPC_JUMP_LABEL(.L_802FDDD8, 0x802FDDD8) //this is a jump label
/*802FDDD8 002FABD8*/ PPC::Runtime::ASM::psq_l(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x58, context->r1)0, context->qr0);
/*802FDDDC 002FABDC*/ PPC::Runtime::ASM::lfd(context->f31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x50, context->r1));
/*802FDDE0 002FABE0*/ PPC::Runtime::ASM::psq_l(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x48, context->r1)0, context->qr0);
/*802FDDE4 002FABE4*/ PPC::Runtime::ASM::lfd(context->f30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x40, context->r1));
/*802FDDE8 002FABE8*/ PPC::Runtime::ASM::psq_l(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x38, context->r1)0, context->qr0);
/*802FDDEC 002FABEC*/ PPC::Runtime::ASM::lfd(context->f29, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x30, context->r1));
/*802FDDF0 002FABF0*/ PPC::Runtime::ASM::psq_l(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x28, context->r1)0, context->qr0);
/*802FDDF4 002FABF4*/ PPC::Runtime::ASM::lfd(context->f28, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x20, context->r1));
/*802FDDF8 002FABF8*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x64, context->r1));
/*802FDDFC 002FABFC*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x1c, context->r1));
/*802FDE00 002FAC00*/ PPC::Runtime::ASM::mtlr(context->r0);
/*802FDE04 002FAC04*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x60);
/*802FDE08 002FAC08*/ PPC::Runtime::ASM::blr();
}