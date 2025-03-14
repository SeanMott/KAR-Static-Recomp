//this code was generated by PPC || "https://github.com/SeanMott/PPC"


//auto-include
#include <PPCRuntime/GCContext.hpp>
#include <PPCRuntime/MacroJumps.hpp>


//this file depends on the following
#include "PPCMfhid0.hpp"
#include "ICEnable.hpp"
#include "DBPrintf.hpp"
#include "PPCMfhid0.hpp"
#include "DCEnable.hpp"
#include "DBPrintf.hpp"
#include "PPCMfl2cr.hpp"
#include "PPCMfmsr.hpp"
#include "PPCMtmsr.hpp"
#include "PPCMfl2cr.hpp"
#include "PPCMtl2cr.hpp"
#include "L2GlobalInvalidate.hpp"
#include "PPCMtmsr.hpp"
#include "PPCMfl2cr.hpp"
#include "PPCMtl2cr.hpp"
#include "DBPrintf.hpp"
#include "DMAErrorHandler.hpp"
#include "DMAErrorHandler.hpp"
#include "OSSetErrorHandler.hpp"
#include "DBPrintf.hpp"



void __OSCacheInit(PPC::Runtime::GCContext* context)
{
/*803D4228 003D1028*/ PPC::Runtime::ASM::mflr(context->r0);
/*803D422C 003D102C*/ PPC::Runtime::ASM::stw(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x4, context->r1));
/*803D4230 003D1030*/ PPC::Runtime::ASM::stwu(context->r1, PPC_RUNTIME_GET_MEMORY_OFFSET_NEG_HEX_LITERAL_OF_SINGLE_REGISTER(-0x10, context->r1));
/*803D4234 003D1034*/ PPC::Runtime::ASM::stw(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803D4238 003D1038*/ PPC::Runtime::ASM::stw(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803D423C 003D103C*/ PPC::Runtime::ASM::lis(context->r3, AT_69_804FAA00 @ Get_MemoryOffset_HighBit);
/*803D4240 003D1040*/ PPC::Runtime::ASM::addi(context->r31, context->r3, AT_69_804FAA00 @ Get_MemoryOffset_LowBit);
/*803D4244 003D1044*/ PPC::Runtime::ASM::bl(PPCMfhid0);
/*803D4248 003D1048*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r3, 0, 16, 16);
/*803D424C 003D104C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D4250 003D1050*/ PPC::Runtime::ASM::bne(.L_803D4264);
/*803D4254 003D1054*/ PPC::Runtime::ASM::bl(ICEnable);
/*803D4258 003D1058*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1ac);
/*803D425C 003D105C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4260 003D1060*/ PPC::Runtime::ASM::bl(DBPrintf);
RUNTIME_PPC_JUMP_LABEL(.L_803D4264, 0x803D4264) //this is a jump label
/*803D4264 003D1064*/ PPC::Runtime::ASM::bl(PPCMfhid0);
/*803D4268 003D1068*/ PPC::Runtime::ASM::rlwinm(context->r0, context->r3, 0, 17, 17);
/*803D426C 003D106C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D4270 003D1070*/ PPC::Runtime::ASM::bne(.L_803D4284);
/*803D4274 003D1074*/ PPC::Runtime::ASM::bl(DCEnable);
/*803D4278 003D1078*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1c8);
/*803D427C 003D107C*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4280 003D1080*/ PPC::Runtime::ASM::bl(DBPrintf);
RUNTIME_PPC_JUMP_LABEL(.L_803D4284, 0x803D4284) //this is a jump label
/*803D4284 003D1084*/ PPC::Runtime::ASM::bl(PPCMfl2cr);
/*803D4288 003D1088*/ PPC::Runtime::ASM::clrrwi(context->r0, context->r3, 31);
/*803D428C 003D108C*/ PPC::Runtime::ASM::cmplwi(context->r0, 0x0);
/*803D4290 003D1090*/ PPC::Runtime::ASM::bne(.L_803D42E8);
/*803D4294 003D1094*/ PPC::Runtime::ASM::bl(PPCMfmsr);
/*803D4298 003D1098*/ PPC::Runtime::ASM::mr(context->r30, context->r3);
/*803D429C 003D109C*/ PPC::Runtime::ASM::sync();
/*803D42A0 003D10A0*/ PPC::Runtime::ASM::li(context->r3, 0x30);
/*803D42A4 003D10A4*/ PPC::Runtime::ASM::bl(PPCMtmsr);
/*803D42A8 003D10A8*/ PPC::Runtime::ASM::sync();
/*803D42AC 003D10AC*/ PPC::Runtime::ASM::sync();
/*803D42B0 003D10B0*/ PPC::Runtime::ASM::bl(PPCMfl2cr);
/*803D42B4 003D10B4*/ PPC::Runtime::ASM::clrlwi(context->r3, context->r3, 1);
/*803D42B8 003D10B8*/ PPC::Runtime::ASM::bl(PPCMtl2cr);
/*803D42BC 003D10BC*/ PPC::Runtime::ASM::sync();
/*803D42C0 003D10C0*/ PPC::Runtime::ASM::bl(L2GlobalInvalidate);
/*803D42C4 003D10C4*/ PPC::Runtime::ASM::mr(context->r3, context->r30);
/*803D42C8 003D10C8*/ PPC::Runtime::ASM::bl(PPCMtmsr);
/*803D42CC 003D10CC*/ PPC::Runtime::ASM::bl(PPCMfl2cr);
/*803D42D0 003D10D0*/ PPC::Runtime::ASM::oris(context->r0, context->r3, 0x8000);
/*803D42D4 003D10D4*/ PPC::Runtime::ASM::rlwinm(context->r3, context->r0, 0, 11, 9);
/*803D42D8 003D10D8*/ PPC::Runtime::ASM::bl(PPCMtl2cr);
/*803D42DC 003D10DC*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1e4);
/*803D42E0 003D10E0*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D42E4 003D10E4*/ PPC::Runtime::ASM::bl(DBPrintf);
RUNTIME_PPC_JUMP_LABEL(.L_803D42E8, 0x803D42E8) //this is a jump label
/*803D42E8 003D10E8*/ PPC::Runtime::ASM::lis(context->r3, DMAErrorHandler @ Get_MemoryOffset_HighBit);
/*803D42EC 003D10EC*/ PPC::Runtime::ASM::addi(context->r4, context->r3, DMAErrorHandler @ Get_MemoryOffset_LowBit);
/*803D42F0 003D10F0*/ PPC::Runtime::ASM::li(context->r3, 0x1);
/*803D42F4 003D10F4*/ PPC::Runtime::ASM::bl(OSSetErrorHandler);
/*803D42F8 003D10F8*/ PPC::Runtime::ASM::addi(context->r3, context->r31, 0x1fc);
/*803D42FC 003D10FC*/ PPC::Runtime::ASM::crclr(context->cr1eq);
/*803D4300 003D1100*/ PPC::Runtime::ASM::bl(DBPrintf);
/*803D4304 003D1104*/ PPC::Runtime::ASM::lwz(context->r0, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x14, context->r1));
/*803D4308 003D1108*/ PPC::Runtime::ASM::lwz(context->r31, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0xc, context->r1));
/*803D430C 003D110C*/ PPC::Runtime::ASM::lwz(context->r30, PPC_RUNTIME_GET_MEMORY_OFFSET_POS_HEX_LITERAL_OF_SINGLE_REGISTER(0x8, context->r1));
/*803D4310 003D1110*/ PPC::Runtime::ASM::addi(context->r1, context->r1, 0x10);
/*803D4314 003D1114*/ PPC::Runtime::ASM::mtlr(context->r0);
/*803D4318 003D1118*/ PPC::Runtime::ASM::blr();
}